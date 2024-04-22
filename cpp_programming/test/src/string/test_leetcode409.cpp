#include "string/leetcode409.h"

#include <gtest/gtest.h>

TEST(Leetcode409Test, Testcase1) {
    std::string str {"zeusnilemacaronimaisanitratetartinasiaminoracamelinsuez"};
    Solution409 so;
    EXPECT_EQ(so.longestPalindrome(str), 55);
}

TEST(Leetcode409Test, Testcase2) {
    std::string str {"ccccc"};
    Solution409 so;
    EXPECT_EQ(so.longestPalindrome(str), 5);
}

TEST(Leetcode409Test, Testcase3) {
    std::string str {"cccc"};
    Solution409 so;
    EXPECT_EQ(so.longestPalindrome(str), 4);
}

TEST(Leetcode409Test, Testcase4) {
    std::string str {"abccccdd"};
    Solution409 so;
    EXPECT_EQ(so.longestPalindrome(str), 7);
}