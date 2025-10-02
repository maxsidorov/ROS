import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TurtleMover(Node):
    def __init__(self):
        super().__init__('my_turtle_mover')
        self.publishers_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.move_turtle)
        self.msg = Twist()
        linear_speed = self.declare_parameter('linear_speed').value
        angular_speed = self.declare_parameter('angular_speed').value

        self.msg.linear.x = linear_speed
        self.msg.angular.z = angular_speed
    def move_turtle(self):
        self.publishers_.publish(self.msg)
        self.get_logger().info('Publishing turle velocity: leinear.x=%f, angular.z=%f' % (self.msg.linear.x, self.msg.angular.z))


def main(args=None):
    rclpy.init(args=args)
    node = TurtleMover()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()