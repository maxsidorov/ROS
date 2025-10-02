import math
import rclpy
from rclpy.node import Node
import random
from turtlesim.srv import Spawn
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class FollowerNode(Node):
    def __init__(self):
        super().__init__('follower')
        self.client = self.create_client(Spawn, 'spawn')
        self.goalPose = Pose()
        self.current_pose = Pose()
        self.timer_period = 0.01
        self.timer = self.create_timer(self.timer_period, self.control_loop)
        self.x_goal = 0.0
        self.y_goal = 0.0
        self.linear_k = 1.0
        self.angular_k = 4.0
        self.arrival_tolerance = 0.1
        self.reached =  False
        self.unreachable = False
        self.last_distance = float('inf')
        self.last_progress_time = self.get_clock().now().nanoseconds
        self.no_progress_limit = 2.0
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service /set_velocity not available, waiting...')

    def post_init(self):
        self.get_logger().info("Current name: " + self.current_name)
        number = str(int(self.current_name.lstrip('turtle'))-1)
        self.get_logger().info("Target number: " + number)
        self.pose_subscriber = self.create_subscription(Pose, '/'+self.current_name+'/pose', self.pose_callback, 10)
        self.publishers_ = self.create_publisher(Twist, '/'+self.current_name+'/cmd_vel', 10)
        self.goal_subscriber = self.create_subscription(Pose, '/turtle'+number+'/pose', self.goal_callback, 10)
        # self.goal_subscriber = self.create_subscription(Pose, '/turtle1/pose', self.goal_callback, 10)

    def set_current_name(self, name):
        self.current_name = name

    def set_goal(self, x, y):
        self.x_goal = x
        self.y_goal = y
        self.reached = False
        self.unreachable = False
        self.last_distance = float('inf')
        self.last_progress_time = self.get_clock().now().nanoseconds

    def pose_callback(self, msg: Pose):
        self.current_pose = msg

    def goal_callback(self, msg: Pose):
        self.goal_pose = msg
        self.set_goal(self.goal_pose.x, self.goal_pose.y)

    def control_loop(self):
        if self.reached or self.unreachable:
            return
        distance = math.sqrt((self.current_pose.x - self.x_goal)**2 + (self.current_pose.y - self.y_goal)**2)
        current_time = self.get_clock().now().nanoseconds
        if distance < self.arrival_tolerance:
            self.reached = True
            self.stop_moving()
            self.get_logger().info('Reached goal!')
            return
        if distance < self.last_distance - 0.0001:
            self.last_progress_time = current_time
            self.last_distance = distance
        else:
            time_no_progress = (current_time - self.last_progress_time) / 1e9
            if time_no_progress > self.no_progress_limit:
                self.stop_moving()
                self.unreachable = True
                self.get_logger().info('No progress for %f seconds, stopping.' % time_no_progress)
                return
        desired_angle = math.atan2(self.y_goal - self.current_pose.y, self.x_goal - self.current_pose.x)
        angle_error = desired_angle - self.current_pose.theta
        angle_error = math.atan2(math.sin(angle_error), math.cos(angle_error))
        twist = Twist()
        twist.linear.x = self.linear_k * distance
        if twist.linear.x > 2.0:
            twist.linear.x = 2.0
        twist.angular.z = self.angular_k * angle_error
        if twist.angular.z > 2.0:
            twist.angular.z = 2.0
        elif twist.angular.z < -2.0:
            twist.angular.z = -2.0

        try:
            self.publishers_.publish(twist)
        except:
            pass

    def stop_moving(self):
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = 0.0

        try:
            self.publishers_.publish(twist)
        except:
            pass

    def spawn_turtle(self):
        req =  Spawn.Request()
        req.x = random.random() * 10
        req.y = random.random() * 10
        req.theta = random.random() * 6
        future = self.client.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            return future.result()
        else:
            self.get_logger().error('Exception while calling service')
            return None

def main(args=None):
    rclpy.init(args=args)
    node = FollowerNode()
    result = node.spawn_turtle()
    node.set_current_name(result.name)
    node.post_init()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()
