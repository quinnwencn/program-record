#include <string/leetcode290.h>

#include <gtest/gtest.h>

using std::string;

TEST(Leetcode290Test, Testcase1) {
    string pattern {"abba"};
    string s {"dog cat cat dog"};
    Solution290 so;
    EXPECT_TRUE(so.wordPattern(pattern, s));
}

TEST(Leetcode290Test, Testcase2) {
    string pattern {"abba"};
    string s {"dog cat cat fish"};
    Solution290 so;
    EXPECT_FALSE(so.wordPattern(pattern, s));
}

TEST(Leetcode290Test, Testcase3) {
    string pattern {"abb"};
    string s {"dog cat cat fish"};
    Solution290 so;
    EXPECT_FALSE(so.wordPattern(pattern, s));
}