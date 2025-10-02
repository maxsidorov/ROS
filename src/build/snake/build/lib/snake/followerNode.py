
import rclpy
from rclpy.node import Node
import random
from turtlesim.srv import Spawn

class FollowerNode(Node):
    def __init__(self):
        super().__init__('follower')
        self.client = self.create_client(Spawn, 'spawn')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service /set_velocity not available, waiting...')
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
    node.spawn_turtle()
    node.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()




