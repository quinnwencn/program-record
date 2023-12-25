//
// Created by Robert on 2023/12/25.
//
#include <gtest/gtest.h>

#include <array/leetcode2965.h>

TEST(Leetcode2965Test, case1) {
    std::vector<std::vector<int>> input {{1, 3}, {2, 2}};
    Solution s;
    auto ret = s.findMissingAndRepeatedValues(input);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 2);
    EXPECT_EQ(ret[1], 4);
}

TEST(Leetcode2965Test, case2) {
    std::vector<std::vector<int>> input {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    Solution s;
    auto ret = s.findMissingAndRepeatedValues(input);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 9);
    EXPECT_EQ(ret[1], 5);
}
