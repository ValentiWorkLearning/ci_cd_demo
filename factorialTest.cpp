#include "factorial.h"
#include "gtest/gtest.h"

TEST(factorialTest, HandlesZeroInput) {
  EXPECT_EQ(math::factorial(0), 1);
}

// Tests factorial of positive numbers.
TEST(factorialTest, HandlesPositiveInput) {
  EXPECT_EQ(math::factorial(1), 1);
  EXPECT_EQ(math::factorial(2), 2);
  EXPECT_EQ(math::factorial(3), 6);
  EXPECT_EQ(math::factorial(8), 40320);
}
