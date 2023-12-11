#include <gtest/gtest.h>

#include <array/leetcode1287.h>

TEST(Leetcode1287Test, case1) {
    std::vector<int> input { 1,2,2,6,6,6,6,7,10 };
    Solution1287 s;
    EXPECT_EQ(s.findSpecialInteger(input), 6);
}

TEST(Leetcode1287Test, case2) {
  std::vector<int> input { 1,2, 3, 3 };
  Solution1287 s;
  EXPECT_EQ(s.findSpecialInteger(input), 3);
}