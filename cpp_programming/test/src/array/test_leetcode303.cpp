//
// Created by Robert on 2024/1/13.
//
#include <gtest/gtest.h>
#include <numeric>

#include <array/leetcode303.h>

TEST(Leetcode303Test, case1) {
    std::vector<int> nums {-2, 0, 3, -5, 2, -1};
    NumArray array(nums);
    EXPECT_EQ(array.sumRange(0, 2), 1);
    EXPECT_EQ(array.sumRange(2, 5), -1);
    EXPECT_EQ(array.sumRange(0, 5), std::accumulate(nums.begin(), nums.end(), 0));
}
