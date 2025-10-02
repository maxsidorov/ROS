import rclpy
from rclpy.node import Node

from my_service_interfaces.srv import SetVelocity
class VelocityServiceServer(Node):
    def __init__(self):
        super().__init__('velocity_service_server')
        self.srv = self.create_service(
            SetVelocity,
            'set_velocity',
            self.handle_set_velocity
        )
        self.get_logger().info('Service /set_velocity is up and running!')
    def handle_set_velocity(self, reqest, response):
        linear = reqest.linear
        angular = reqest.angular
        self.get_logger().info(f'Velocity is {linear} and {angular}')
        success = True
        message = f'velocity is linear = {linear:.2f},  angular = {angular:.2f}'
        response.success = success
        response.message = message
        return response
def main(args=None):
    rclpy.init(args=args)
    node = VelocityServiceServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
