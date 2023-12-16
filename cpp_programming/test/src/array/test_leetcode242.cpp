//
// Created by Robert on 2023/12/16.
//
#include <gtest/gtest.h>

#include <array/leetcode242.h>

TEST(Leetcode242Test, ExpectFalse) {
    std::string s {"rat"};
    std::string t {"cat"};
    Solution242 solution242;
    EXPECT_FALSE(solution242.isAnagram(s, t));
}

TEST(Leetcode242Test, ExpectTrue) {
    std::string s {"anagram"};
    std::string t {"nagaram"};
    Solution242 solution242;
    EXPECT_TRUE(solution242.isAnagram(s, t));
}
