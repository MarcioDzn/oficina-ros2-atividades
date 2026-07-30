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

        # 1. Se inscrever no tópico de estado dos IMUs
        # Aqui você deve criar o objeto Subscription utilizando o método create_subscription

        # Quatro parâmetros devem ser passados para o método create_subscription
        #   1. A interface ActuatorCommand
        #   2. O nome do tópico: 'imu/state'
        #   3. O callback que vai de fator receber e processar a mensagem: imu_callback
        #   4. O perfil QoS: 10

        # Descomente e complete:
        #self.imu_sub =
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

        # 2. Guardar os dados dos IMUs no dicionário
        # Aqui você deve percorrer os dados dos IMUs e guardar em imu_states
        # em um dicionário com a seguinte estrutura:
        # self.imu_states[<nome_do_imu>] = {
        #   'q_w': <q_w>,
        #   'q_x': <q_x>,,
        #   'q_y': <q_y>,,
        #   'q_z': <q_z>,
        # }
        # Para descobrir como acessar os dados observe a estrutura das mensagens
        # IMUState e IMUData, presentes no pacote 'interfaces'

        # 3. Exibir os dados com self.get_logger().info()
        # Para cada IMU, exiba o seu nome junto aos seus 
        # dados de quaternions (q_w, q_x, q_y, q_z)
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