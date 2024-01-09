//
// Created by Robert on 2024/1/9.
//
#include <gtest/gtest.h>

#include <array/leetcode219.h>

TEST(Leetcode219Test, trueTest) {
    std::vector<int> nums {1, 2, 3, 1};
    Solution219 s;
    EXPECT_TRUE(s.containsNearbyDuplicate(nums, 3));
}

TEST(Leetcode219Test, falseTest) {
    std::vector<int> nums {1, 2, 3, 1, 2, 3};
    Solution219 s;
    EXPECT_FALSE(s.containsNearbyDuplicate(nums, 2));
}
