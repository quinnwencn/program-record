#include <gtest/gtest.h>

#include <array/leetcode1464.h>

TEST(Leetcode1464, case1) {
    Solution1464 s;
    std::vector<int> input {3, 4, 5, 2};
    EXPECT_EQ(12, s.maxProduct(input));

    Solution1464_2 s2;
    EXPECT_EQ(12, s2.maxProduct(input));
}

TEST(Leetcode1464, case2) {
  Solution1464 s;
  std::vector<int> input {1,5,4,5};
  EXPECT_EQ(16, s.maxProduct(input));

  Solution1464_2 s2;
  EXPECT_EQ(16, s2.maxProduct(input));
}