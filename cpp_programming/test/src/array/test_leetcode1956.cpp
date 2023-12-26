//
// Created by Robert on 2023/12/26.
//
#include <gtest/gtest.h>

#include <array/leetcode2956.h>

TEST(Leetcode2956Test, case1) {
    std::vector<int> num1 {4, 3, 2, 3, 1};
    std::vector<int> num2 {2, 2, 5, 2, 3, 6};
    Solution2956 s;
    auto ret = s.findIntersectionValues(num1, num2);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 3);
    EXPECT_EQ(ret[1], 4);
}

TEST(Leetcode2956Test, case2) {
    std::vector<int> num1 {4, 3, 2, 3};
    std::vector<int> num2 {1, 5, 6};
    Solution2956 s;
    auto ret = s.findIntersectionValues(num1, num2);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 0);
    EXPECT_EQ(ret[1], 0);
}
