// "Copyright [year] <Copyright Owner>"

#include <gtest/gtest.h>
#include <memory>

#include "as2_node_template/as2_node_template.hpp"

using namespace as2_node_template;

TEST(As2NodeTemplate, test_constructor) {
  EXPECT_NO_THROW(std::shared_ptr<As2NodeTemplate> node = std::make_shared<As2NodeTemplate>());
}

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}