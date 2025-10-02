import rclpy
from rclpy.node import Node
from std_msgs.msg import UInt32

class Talker(Node):
    def __init__(self):
        super().__init__('talker')
        self.publisher_ = self.create_publisher(UInt32, 'chatter', 10)
        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.publish_message)
        self.msg = UInt32()
        self.msg.data = 0

    def publish_message(self):
        self.publisher_.publish(self.msg)
        self.get_logger().info('Publishing: "%s"' % self.msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = Talker()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()