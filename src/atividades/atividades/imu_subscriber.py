import rclpy
from rclpy.node import Node

from interfaces.msg import IMUState

from rclpy.qos import (
    QoSProfile,
    QoSReliabilityPolicy,
    QoSDurabilityPolicy
)

class IMUSubscriber(Node):
    def __init__(self):
        super().__init__('imu_subscriber')

        # Configura perfil QoS
        qos_profile = QoSProfile(
            depth=10,
            reliability=QoSReliabilityPolicy.BEST_EFFORT,
            durability=QoSDurabilityPolicy.VOLATILE
        )

        # Guarda os últimos estados recebidos das IMUs
        self.imu_states = {}

        # Subscriber do tópico imu/state
        self.imu_sub = self.create_subscription(
            IMUState,
            'imu/state',
            self.imu_callback,
            qos_profile
        )

        self.get_logger().info(
            "Nó IMUSubscriber iniciado com sucesso"
        )


    def imu_callback(self, msg):
        """
        Recebe o estado das IMUs.
        """

        # Percorre a lista de IMUData
        for imu in msg.imus:

            self.imu_states[imu.name] = {
                'q_w': imu.q_w,
                'q_x': imu.q_x,
                'q_y': imu.q_y,
                'q_z': imu.q_z
            }

            self.get_logger().info(
                f"{imu.name} -> "
                f"q=[{imu.q_w}, {imu.q_x}, {imu.q_y}, {imu.q_z}]"
            )


def main(args=None):
    rclpy.init(args=args)

    node = IMUSubscriber()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()