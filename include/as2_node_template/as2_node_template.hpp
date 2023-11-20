// "Copyright [year] <Copyright Owner>"

#ifndef AS2_NODE_TEMPLATE_HPP_
#define AS2_NODE_TEMPLATE_HPP_

#include <rclcpp/rclcpp.hpp>
#include "as2_core/node.hpp"

namespace as2_node_template {

class As2NodeTemplate : public as2::Node {
  using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

public:
  As2NodeTemplate();
  virtual ~As2NodeTemplate() = default;

  CallbackReturn on_configure(const rclcpp_lifecycle::State&) override;
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State&) override;
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State&) override;
};  // class As2NodeTemplate

}  // namespace as2_node_template

#endif  // AS2_NODE_TEMPLATE_HPP_
