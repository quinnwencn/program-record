//
// Created by Robert on 2023/12/21.
//
#include <gtest/gtest.h>

#include <array/leetcode2960.h>

TEST(Leetcode2960Test, case1) {
    std::vector<int> input {1, 1, 2, 1, 3};
    Solution2960 s;
    EXPECT_EQ(s.countTestedDevices(input), 3);
}

TEST(Leetcode2960Test, case2) {
    std::vector<int> input {0, 1, 2};
    Solution2960 s;
    EXPECT_EQ(s.countTestedDevices(input), 2);
}