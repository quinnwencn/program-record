#include "string/leetcode459.h"

#include <gtest/gtest.h>

TEST(Leetcode459Test, Testcase1) {
    std::string s {"abac"};
    Solution459 so;
    EXPECT_FALSE(so.repeatedSubstringPattern(s));
}

TEST(Leetcode459Test, Testcase2) {
    std::string s {"abcdab"};
    Solution459 so;
    EXPECT_FALSE(so.repeatedSubstringPattern(s));
}