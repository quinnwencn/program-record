//
// Created by Robert on 2024/1/4.
//
#include <gtest/gtest.h>

#include <array/leetcode118.h>

TEST(Leetcode118Test, Test0) {
    Solution118 s;
    auto ret = s.generate(0);
    EXPECT_EQ(ret.size(), 0);
}

TEST(Leetcode118Test, Case1) {
    Solution118 s;
    auto ret = s.generate(5);
    EXPECT_EQ(ret.size(), 5);
    std::vector<std::vector<int>> result {{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}};
    for (auto i = 0; i < ret.size(); ++i) {
        for (auto j = 0; j < ret[i].size(); ++j) {
            EXPECT_EQ(ret[i][j], result[i][j]);
        }
    }
}