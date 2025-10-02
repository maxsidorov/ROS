import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
class TurtlePoseFollower(Node):
    def __init__(self):
        super().__init__('turtle_pose_follower')
        self.pose_subscriber = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.publishers_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
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
    def set_goal(self, x, y):
        self.x_goal = x
        self.y_goal = y
        self.reached = False
        self.unreachable = False
        self.last_distance = float('inf')
        self.last_progress_time = self.get_clock().now().nanoseconds
    def pose_callback(self, msg: Pose):
        self.current_pose = msg
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
        self.publishers_.publish(twist)
    def stop_moving(self):
        twist = Twist()
        twist.linear.x = 0.0
        twist.angular.z = 0.0
        self.publishers_.publish(twist)
def main(args=None):
    rclpy.init(args=args)
    node = TurtlePoseFollower()
    try:
        while rclpy.ok():
            user_input =  input('Enter goal coordinates (x, y): ').strip()
            if not user_input:
                continue
            if user_input.lower() == 'q':
                print('Quitting')
                break
            cords = user_input.split(',')
            if len(cords) < 2:
                print('Invalid input')
                continue
            try:
                x_goal = float(cords[0])
                y_goal = float(cords[1])
            except ValueError:
                print('Invalid input')
                continue
            node.set_goal(x_goal, y_goal)
            node.get_logger().info('Goal set to (%f, %f)' % (x_goal, y_goal))
            while rclpy.ok() and not node.reached and not node.unreachable:
                rclpy.spin_once(node, timeout_sec = 0.1)
            if node.reached:
                print('Reached goal!')
            elif node.unreachable:
                print('No progress for %f seconds, stopping.')
            else:
                print('Quitting')
                break
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()







