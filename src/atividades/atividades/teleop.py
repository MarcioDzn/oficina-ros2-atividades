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

        self.position = 1500
        self.step = 100

        self.publish_command()

        self.running = True
        self.keyboard_thread = threading.Thread(target=self.keyboard_loop)
        self.keyboard_thread.daemon = True
        self.keyboard_thread.start()

        self.get_logger().info("Use ↑ e ↓ para mover o joint_1 (q para sair)")

    def publish_command(self):
        msg = ActuatorCommand()
        msg.names = ["joint_1"]
        msg.goals = [int(self.position)]

        self.pub.publish(msg)
        self.get_logger().info(f"joint_1 -> {self.position}")

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
                self.position = min(3000, self.position + self.step)
                self.publish_command()

            elif key == '\x1b[B':  # seta para baixo
                self.position = max(0, self.position - self.step)
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