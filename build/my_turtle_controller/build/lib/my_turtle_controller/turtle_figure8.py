import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math

class TurtleFigure8(Node):
    def __init__(self):
        super().__init__('move_turtle_speed')
        self.publishers_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        timer_period = 0.01
        self.timer = self.create_timer(timer_period, self.move_turtle_speed)
        self.msg = Twist()
        self.start_time = self.get_clock().now().nanoseconds / 1e9
    def move_turtle_speed(self):
        current_time = self.get_clock().now().nanoseconds / 1e9 - self.start_time
        self.msg.linear.x = 2.0
        self.msg.angular.z = 1.0
        self.publishers_.publish(self.msg)
        R = math.fabs(self.msg.linear.x) / self.msg.angular.z
        T = 4 * math.pi * R / math.fabs(self.msg.linear.x)
        elapsed_time = current_time % T
        if elapsed_time < T / 2:
            self.msg.angular.z = 1.0
        else:
            self.msg.angular.z = -1.0
        self.publishers_.publish(self.msg)
        self.get_logger().info('Publishing turle velocity: leinear.x=%f, angular.z=%f' % (self.msg.linear.x, self.msg.angular.z))

def main(args=None):
    rclpy.init(args=args)
    node = TurtleFigure8()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()