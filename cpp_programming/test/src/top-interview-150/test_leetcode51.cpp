//
// Created by quinn on 12/15/2024.
//

#include <gtest/gtest.h>

#include <top-interview-150/leetcode51.h>

TEST(Leetcode51, testcase1) {
    std::string s {"the sky is blue"};
    Solution51 so;

    EXPECT_EQ("blue is sky the", so.reverseWords(s));
}

TEST(Leetcode51, testcase2) {
    std::string s {" the sky is blue"};
    Solution51 so;

    EXPECT_EQ("blue is sky the", so.reverseWords(s));
}
