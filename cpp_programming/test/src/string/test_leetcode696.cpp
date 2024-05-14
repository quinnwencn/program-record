#include "string/leetcode696.h"

#include <gtest/gtest.h>

TEST(Leetcode696Test, Testcase1) {
    std::string s {"00110011"};
    Solution696 so;
    EXPECT_EQ(so.countBinarySubstrings(s), 6);
}