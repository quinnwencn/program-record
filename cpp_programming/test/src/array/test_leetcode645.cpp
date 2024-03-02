//
// Created by Robert on 2024/3/2.
//
#include <gtest/gtest.h>

#include <array/leetcode645.h>

TEST(Leetcode645Test, testcase1) {
    std::vector<int> nums {4, 2, 1, 2};
    Solution645 s;
    auto ret = s.findErrorNums(nums);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 2);
    EXPECT_EQ(ret[1], 3);
}

TEST(Leetcode645Test, testcase2) {
    std::vector<int> nums {1, 1};
    Solution645 s;
    auto ret = s.findErrorNums(nums);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 1);
    EXPECT_EQ(ret[1], 2);
}