//
// Created by quinn on 12/14/2024.
//

#include <gtest/gtest.h>

#include <top-interview-150/leetcode42.h>

TEST(LeetCode42, Testcase1) {
    std::vector<int> nums {4,2,0,3,2,5};
    Solution42 so;

    EXPECT_EQ(9, so.trap(nums));
}

TEST(LeetCode42, Testcase2) {
    std::vector<int> nums {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution42 so;

    EXPECT_EQ(6, so.trap(nums));
}

TEST(LeetCode42, Testcase3) {
    std::vector<int> nums {0};
    Solution42 so;

    EXPECT_EQ(0, so.trap(nums));
}

TEST(LeetCode42, Testcase4) {
    std::vector<int> nums {};
    Solution42 so;

    EXPECT_EQ(0, so.trap(nums));
}

TEST(LeetCode42, Testcase5) {
    std::vector<int> nums {8,8,1,5,6,2,5,3,3,9};
    Solution42 so;

    EXPECT_EQ(31, so.trap(nums));
}
