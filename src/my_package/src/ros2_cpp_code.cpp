// ref: https://www.theconstructsim.com/ros2-tutorials-create-a-ros2-package-cpp/

#include "rclcpp/rclcpp.hpp"

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("Hello_Node");
  RCLCPP_INFO(node->get_logger(),
              "Hi, this is my first rs2 node.");
  
  rclcpp::shutdown();
  return 0;
}
