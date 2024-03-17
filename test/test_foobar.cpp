#include <gtest/gtest.h>

#include <simple_package/foobar.hpp>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(FoobarTest, TestIntFunc)
{
  ASSERT_EQ(int_func(5), 5);
}
