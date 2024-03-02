//
// Created by Robert on 2024/3/2.
//
#include <gtest/gtest.h>

#include <array/leetcode643.h>

using namespace std;

TEST(Leetcode643Test, case1) {
    vector<int> nums {1,12,-5,-6,50,3};
    Solution643 s;
    auto ret = s.findMaxAverage(nums, 4);
    EXPECT_EQ(ret, 12.75);
}

TEST(Leetcode643Test, case2) {
    vector<int> nums {55};
    Solution643 s;
    auto ret = s.findMaxAverage(nums, 1);
    EXPECT_EQ(ret, 55.0);
}