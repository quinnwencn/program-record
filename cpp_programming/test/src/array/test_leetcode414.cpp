//
// Created by Robert on 2024/1/17.
//
#include <gtest/gtest.h>

#include <array/leetcode414.h>

TEST(Leetcode414, moreThanThreeElements) {
    std::vector<int> nums {2, 2, 3, 4, 1, 5};
    Solution414 s;
    EXPECT_EQ(s.thirdMax(nums), 3);
}

TEST(Leetcode414, lessThanThreeElements) {
    std::vector<int> nums {1, 5};
    Solution414 s;
    EXPECT_EQ(s.thirdMax(nums), 5);
}