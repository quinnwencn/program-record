//
// Created by Quinn on 2024/8/4.
//

#include <top-interview-150/leetcode169.h>

#include <gtest/gtest.h>

TEST(Leetcode169Test, Testcase1) {
    std::vector<int> nums {3, 1, 3, 2, 3, 4, 3, 3, 1};
    Solution169 so;

    EXPECT_EQ(3, so.majorityElement(nums));
}

TEST(Leetcode169Test, Testcase2) {
    std::vector<int> nums {2,2,1,1,1,2,2};
    Solution169 so;

    EXPECT_EQ(2, so.majorityElement(nums));
}
