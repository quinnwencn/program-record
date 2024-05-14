#include "string/leetcode541.h"

#include <gtest/gtest.h>

TEST(Leetcode541Test, Testcase1) {
    std::string s {"abcd"};
    Solution541 so;
    EXPECT_EQ(so.reverseStr(s, 4), "dcba");
}

TEST(Leetcode541Test, Testcase2) {
    std::string s {"abcdefg"};
    Solution541 so;
    EXPECT_EQ(so.reverseStr(s, 8), "gfedcba");
}