//
// Created by Robert on 2023/12/14.
//
#include <gtest/gtest.h>

#include <array/leetcode26.h>

TEST(Leetocde26Test, case1) {
    std::vector<int> input {1, 1, 2};
    Solution26 s;
    EXPECT_EQ(2, s.removeDuplicates(input));
}

TEST(Leetcode26Test, case2) {
    std::vector<int> input {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution26 s;
    EXPECT_EQ(5, s.removeDuplicates(input));
}
