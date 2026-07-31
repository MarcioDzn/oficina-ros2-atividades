#!/usr/bin/env python3

import sys
import tty
import termios
import threading

import rclpy
from rclpy.node import Node

from interfaces.msg import ActuatorCommand


class KeyboardActuator(Node):

    def __init__(self):
        super().__init__("keyboard_actuator")

        self.pub = self.create_publisher(
            ActuatorCommand,
            "actuator/command",
            10,
        )

        self.names = ["joint_1", "joint_2", "joint_3"]
        self.positions = [1500, 1500, 1500]
        self.step = 300

        self.publish_command()

        self.running = True
        self.keyboard_thread = threading.Thread(target=self.keyboard_loop)
        self.keyboard_thread.daemon = True
        self.keyboard_thread.start()

        self.get_logger().info("Use ↑ e ↓ para mover o joint_1 (q para sair)")

    def publish_command(self):
        msg = ActuatorCommand()
        msg.names = self.names
        msg.goals = [int(position) for position in self.positions]

        self.pub.publish(msg)
        self.get_logger().info(f"joint_1 -> {self.positions[0]}")
        self.get_logger().info(f"joint_2 -> {self.positions[1]}")
        self.get_logger().info(f"joint_3 -> {self.positions[2]}")

    def get_key(self):
        fd = sys.stdin.fileno()
        old_settings = termios.tcgetattr(fd)

        try:
            tty.setraw(fd)

            ch1 = sys.stdin.read(1)

            if ch1 == '\x1b':
                ch2 = sys.stdin.read(1)
                ch3 = sys.stdin.read(1)
                return ch1 + ch2 + ch3

            return ch1

        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)

    def keyboard_loop(self):
        while self.running and rclpy.ok():
            key = self.get_key()

            if key == '\x1b[A':  # seta para cima   
                self.positions[0] = max(1000, self.positions[0] - self.step)
                self.positions[1] = min(2800, self.positions[1] + self.step)
                self.positions[2] = min(3000, self.positions[2] + self.step)
                self.publish_command()

            elif key == '\x1b[B':  # seta para baixo
                self.positions[0] = min(3000, self.positions[0] + self.step)
                self.positions[1] = max(1000, self.positions[1] - self.step)
                self.positions[2] = max(1500, self.positions[2] - self.step)
                self.publish_command()

            elif key == '\x1b[C':  # seta para direita
                self.positions[0] = min(3000, self.positions[0] + self.step)
                self.positions[1] = min(3000, self.positions[1] + self.step)
                self.positions[2] = max(1500, self.positions[2] - self.step)
                self.publish_command()

            elif key == '\x1b[D':  # seta para esquerda
                self.positions[0] = min(3000, self.positions[0] + self.step)
                self.positions[1] = max(1000, self.positions[1] - self.step)
                self.positions[2] = min(3000, self.positions[2] + self.step)
                self.publish_command()

            elif key == 'q':
                self.get_logger().info("Encerrando...")
                rclpy.shutdown()
                break


def main(args=None):
    rclpy.init(args=args)

    node = KeyboardActuator()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.running = False

    if node.keyboard_thread.is_alive():
        node.keyboard_thread.join(timeout=1.0)

    node.destroy_node()


if __name__ == "__main__":
    main()