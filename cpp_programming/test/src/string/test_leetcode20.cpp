//
// Created by Robert on 2024/3/23.
//
#include <string/leetcode20.h>

#include <gtest/gtest.h>

TEST(Leetcode20Test, testcase1) {
    std::string brackets {"()[]{}"};
    Solution20 s;
    EXPECT_TRUE(s.isValid(brackets));
}

TEST(Leetcode20Test, testcase2) {
    std::string brackets {"()[{]}"};
    Solution20 s;
    EXPECT_FALSE(s.isValid(brackets));
}