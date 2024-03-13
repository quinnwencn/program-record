//
// Created by Robert on 2024/3/13.
//
#include <array/leetcode684.h>

#include <gtest/gtest.h>

TEST(Leetcode684Test, testcast1) {
    std::vector<std::string> ops {"5","2","C","D","+"};
    Solution684 s;
    EXPECT_EQ(s.calPoints(ops), 30);
}

TEST(Leetcode684Test, testcast2) {
    std::vector<std::string> ops {"5","-2","4","C","D","9","+","+"};
    Solution684 s;
    EXPECT_EQ(s.calPoints(ops),27);
}