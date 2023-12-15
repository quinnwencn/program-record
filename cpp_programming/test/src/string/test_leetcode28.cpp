//
// Created by Robert on 2023/12/15.
//
#include <gtest/gtest.h>

#include <string/leetcode28.h>

TEST(Leetcode28Test, case1) {
    std::string str {"sadbutsad"};
    Solution28 s;
    EXPECT_EQ(3, s.strStr(str, "but"));
}

TEST(Leetcode28Test, case2) {
    std::string str {"leetcode"};
    Solution28 s;
    EXPECT_EQ(4, s.strStr(str, "co"));
}
