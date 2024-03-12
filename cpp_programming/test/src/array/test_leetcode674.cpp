//
// Created by Robert on 2024/3/12.
//
#include <gtest/gtest.h>

#include <array/leetcode674.h>

TEST(Leetcode674Test, Testcase1) {
    std::vector<int> nums {1, 3, 5, 4, 6};
    Solution674 s;
    EXPECT_EQ(s.findLengthOfLCIS(nums), 3);
}

TEST(Leetcode674Test, Testcase2) {
    std::vector<int> nums {2, 2, 2};
    Solution674 s;
    EXPECT_EQ(s.findLengthOfLCIS(nums), 1);
}

TEST(Leetcode674Test, Testcase3) {
    std::vector<int> nums {1, 2, 3, 7};
    Solution674 s;
    EXPECT_EQ(s.findLengthOfLCIS(nums), 4);
}