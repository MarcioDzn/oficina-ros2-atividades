from rclpy.node import Node


class ParameterManager:
    def __init__(self, node: Node):
        self.node = node

        self.node.declare_parameter(
            'names',
            ['joint_1', 'joint_2', 'joint_3']
        )

        self.node.declare_parameter(
            'amplitudes',
            [1500.0, 1500.0, 1500.0]
        )

        self.node.declare_parameter(
            'periods',
            [1.0, 1.0, 1.0]
        )

        self.node.declare_parameter(
            'offsets',
            [1500.0, 1500.0, 1500.0]
        )

        self.node.declare_parameter(
            'phases',
            [0.0, 0.0, 0.0]
        )

        self.node.declare_parameter(
            'delays',
            [0.0, 1.0, 2.0]
        )

        self.node.declare_parameter('samples', 100)
        self.node.declare_parameter('loops', 2)

    @property
    def names(self):
        return self.node.get_parameter('names').value

    @property
    def amplitudes(self):
        return self.node.get_parameter('amplitudes').value

    @property
    def periods(self):
        return self.node.get_parameter('periods').value

    @property
    def offsets(self):
        return self.node.get_parameter('offsets').value

    @property
    def phases(self):
        return self.node.get_parameter('phases').value

    @property
    def samples(self):
        return self.node.get_parameter('samples').value

    @property
    def delays(self):
        return self.node.get_parameter('delays').value

    @property
    def loops(self):
        return self.node.get_parameter('loops').value