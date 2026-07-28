import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/marcio/Documentos/Dev/UEFS/SIECOMP 2026.2/oficina_ros2_atividades/install/atividades'
