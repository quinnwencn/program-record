//
// Created by Robert on 2023/12/15.
//
#include <gtest/gtest.h>

#include <array/leetcode1436.h>

TEST(Leetcode1436Test, case1) {
    std::vector<std::vector<std::string>> paths {{"London", "New York"}, {"New York", "Lima"}, {"Lima", "Sao Paulo"}};
    Solution1436 s;
    EXPECT_EQ("Sao Paulo", s.destCity(paths));
}

TEST(Leetcode1436Test, case2) {
    std::vector<std::vector<std::string>> paths {{"B", "C"}, {"D", "B"}, {"C", "A"}};
    Solution1436 s;
    EXPECT_EQ("A", s.destCity(paths));
}
