import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from interfaces.action import ActuatorMove
from interfaces.msg import ActuatorCommand

from atividades.parameters.parameter_manager import ParameterManager

from math import pi

class ActuatorCoordinator(Node):
    def __init__(self):
        super().__init__('coordenador_atuadores')
        
        # Classe gerenciadora de parâmetros
        self.params = ParameterManager(self)

        # 1. Criar o Action Client
        # Aqui você deve criar o objeto ActionClient
        # Dois parâmetros devem ser passados para a classe ActionClient:
        #   1. A interface ActuatorMove
        #   2. O nome do action: 'actuator/move' 

        # Descomente e complete:
        #self._action_client =

        
        # 2. Se inscrever no tópico de comando
        # Aqui você deve criar o objeto Subscription utilizando o método create_subscription
        # Quatro parâmetros devem ser passados para o método create_subscription
        #   1. A interface ActuatorCommand
        #   2. O nome do tópico: 'actuator/command'
        #   3. O callback que vai de fator receber e processar a mensagem: command_callback
        #   4. O perfil QoS: 10
        
        # Descomente e complete:
        #self.cmd_sub = 
        
        self.desired_positions = {}

        # Envia a trajetória apenas uma vez quando executar o nó
        self.timer = self.create_timer(1.0, self._start)

        self.get_logger().info("Nó ActuatorCoordinator iniciado com sucesso")


    def _start(self):
        """
        Permite enviar a trajetória apenas uma vez ao executar o nó.
        """
                
        self.timer.cancel() 

        self.get_logger().info("Enviando trajetória...")
        self.send_trajectory()


    def command_callback(self, msg):
        """
        Guarda a última mensagem que foi publicada no tópico 'actuator/command'

        Essa mensagem contém a posição desejada do atuador enviada pelo action.

        Atribui essa posição ao atuador correspondente.
        """

        for name, goal in zip(msg.names, msg.goals):
            self.desired_positions[name] = goal


    def send_trajectory(self):
        """
        Envia a trajetória desejada para o action server.
        """
                
        # Constrói a mensagem de goal enviada para o action server
        goal_msg = ActuatorMove.Goal()

        # Obtém os parâmetros passados
        goal_msg.names = self.params.names
        goal_msg.amplitudes = self.params.amplitudes
        goal_msg.periods = self.params.periods
        goal_msg.offsets = self.params.offsets
        goal_msg.phases = self.params.phases
        goal_msg.samples = self.params.samples
        goal_msg.delays = self.params.delays
        goal_msg.loops = self.params.loops

        # Aguarda o action server ficar disponível
        self._action_client.wait_for_server()
        
        # 3. Enviar o goal para o action
        # Aqui você deve enviar a mensagem para o action server utilizando o método send_goal_async

        # Dois parâmetros devem ser passados para o método send_goal_async
        #   1. A mensagem a ser enviada: goal_msg 
        #   2. O callback que vai receber e processar o feedback: feedback_callback

        # Descomente e complete:
        #self._send_goal_future = 


    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback

        # Armazena o nome dos atuadores e suas respectivas posições atuais
        for name, current_position in zip(feedback.names, feedback.current_positions):
            # Verifica se o nome do atuador 
            # recebido pelo feedback bate com o enviado no command
            if name in self.desired_positions:
                desired_position = self.desired_positions[name]
                
                # 4. Calcular o erro
                # Aqui você deve calcular o erro entre a posição desejada e 
                # e a posição atual enviada pelo feedack. É uma subtração simples.

                # Descomente e complete:
                # error = 
                
                self.get_logger().info(
                    f"[{name}] Alvo: {desired_position} | Real: {current_position} | Erro: {error}"
                )


def main(args=None):
    rclpy.init(args=args)

    node = ActuatorCoordinator()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()