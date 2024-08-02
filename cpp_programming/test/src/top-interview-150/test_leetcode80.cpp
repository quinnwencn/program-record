//
// Created by Quinn Wen on 2024/8/1.
//


#include <gtest/gtest.h>

#include <top-interview-150/leetcode80.h>

TEST(LeetCode80, Testcase1) {
    std::vector<int> nums {0,0,1,1,1,1,2,3,3};
    Solution80 so;
    Solution80_2 so2;

    EXPECT_EQ(7, so.removeDuplicates(nums));
    EXPECT_EQ(7, so2.removeDuplicates(nums));
}

TEST(LeetCode80, Testcase2) {
    std::vector<int> nums {1,1,1,2,2,3};
    Solution80 so;
    Solution80_2 so2;

    EXPECT_EQ(5, so.removeDuplicates(nums));
    EXPECT_EQ(5, so2.removeDuplicates(nums));
}
