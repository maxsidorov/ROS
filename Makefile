.ONSHELL:
SHELL := bash
init:
	colcon build
	echo -e "\e[32m build fineshed \e[0m"
	bash -c "source ~/.bashrc && echo 'Bashrc sourced'"
run:
	echo -e "\e[32mLaunch by launch-file\e[0m"
	source install/setup.bash
	ros2 launch my_project_start start.launch.py
