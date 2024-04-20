#include "string/leetcode389.h"

#include <gtest/gtest.h>

TEST(Leetcode389Test, Testcase1) {
    std::string s {"abcd"};
    std::string t {"abdce"};

    Solution389 so;
    EXPECT_EQ('e', so.findTheDifference(s, t));
}

TEST(Leetcode389Test, Testcase2) {
    std::string s {""};
    std::string t {"e"};

    Solution389 so;
    EXPECT_EQ('e', so.findTheDifference(s, t));
}

TEST(Leetcode389Test, Testcase3) {
    std::string s {"abcde"};
    std::string t {"abcdee"};

    Solution389 so;
    EXPECT_EQ('e', so.findTheDifference(s, t));
}