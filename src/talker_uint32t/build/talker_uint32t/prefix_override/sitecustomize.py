import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/maxim/ros2_ws/src/talker_uint32t/install/talker_uint32t'
