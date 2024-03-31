//
// Created by Robert on 2024/3/31.
//

#include <string/leetcode67.h>

#include <gtest/gtest.h>

using std::string;

TEST(Leetcode67Test, Testcase1) {
    string str1 {"11"};
    string str2 {"1"};

    EXPECT_EQ("100", addBinary(str1, str2));
}

TEST(Leetcode67Test, Testcase2) {
    string str1 {"1010"};
    string str2 {"1011"};

    EXPECT_EQ("10101", addBinary(str1, str2));
}