//
// Created by Robert on 2023/12/21.
//
#include <gtest/gtest.h>

#include <array/leetcode1913.h>

TEST(Leetcode1913Test, case1) {
    std::vector<int> input {5, 6, 2, 7, 4};
    Solution1913 s;
    EXPECT_EQ(s.maxProductDifference(input), 34);
}

TEST(Leetcode1913Test, case2) {
    std::vector<int> input {4, 2, 5, 9, 7, 4, 8};
    Solution1913 s;
    EXPECT_EQ(s.maxProductDifference(input), 64);
}
