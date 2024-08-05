//
// Created by Quinn on 2024/8/5.
//
#include "top-interview-150/leetcode189.h"

#include <gtest/gtest.h>

TEST(Leetcode189Test, Testcase1) {
    std::vector<int> nums { 1, 2, 3};
    int k = 4;

    std::vector<int> rotated { 3, 1, 2};
    Solution189 so;
    so.rotate(nums, k);
    EXPECT_EQ(nums, rotated);
}

TEST(Leetcode189Test, Testcase2) {
    std::vector<int> nums { 1};
    int k = 3;

    std::vector<int> rotated { 1};
    Solution189 so;
    so.rotate(nums, k);
    EXPECT_EQ(nums, rotated);
}

TEST(Leetcode189Test, Testcase3) {
    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    std::vector<int> rotated {6, 7, 8, 1, 2, 3, 4, 5};
    Solution189 so;
    so.rotate1(nums, k);
    EXPECT_EQ(nums, rotated);
}
