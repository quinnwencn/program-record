#include <string/leetcode205.h>

#include <gtest/gtest.h>

using std::string;

TEST(Leetcode207Test, Testcase1) {
    string s {"ab"};
    string t {"aa"};

    Solution205 so;
    EXPECT_FALSE(so.isIsomorphic(s, t));
}

TEST(Leetcode207Test, Testcase2) {
    string s {"paper"};
    string t {"title"};

    Solution205 so;
    EXPECT_TRUE(so.isIsomorphic(s, t));
}

TEST(Leetcode207Test, Testcase3) {
    string s {"add"};
    string t {"egg"};

    Solution205 so;
    EXPECT_TRUE(so.isIsomorphic(s, t));
}
