//
// Created by Robert on 2023/12/17.
//

#include <gtest/gtest.h>

#include <array/leetcode1.h>

TEST(Leetcode1Test, NoResult) {
    std::vector<int> nums {1, 3, 5, 7};
    Solution1 s;
    EXPECT_TRUE(s.twoSum(nums, 9).empty());
}

TEST(Leetcode1Test, SameElement) {
    std::vector<int> nums {1, 2, 2, 5, 7};
    Solution1 s;
    auto output = s.twoSum(nums, 4);
    EXPECT_EQ(output.size(), 2);
    EXPECT_EQ(output[0], 1);
    EXPECT_EQ(output[1], 2);
}
