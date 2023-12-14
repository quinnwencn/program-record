#include <gtest/gtest.h>

#include <top-interview-150/leetcode14.h>

TEST(Leetcode14Test, case1) {
    vector<string> strs {"flower", "flow", "flight"};
    Solution14 s;
    EXPECT_EQ("fl", s.longestCommonPrefix(strs));
}

TEST(Leetcode14Test, case2) {
    vector<string> strs {"flower", "love", "flight"};
    Solution14 s;
    EXPECT_EQ("", s.longestCommonPrefix(strs));
}
