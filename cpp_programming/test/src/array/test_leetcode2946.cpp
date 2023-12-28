//
// Created by Robert on 2023/12/28.
//
#include <gtest/gtest.h>

#include <array/leetcode2946.h>

TEST(Leetcode2946Test, TrueTest) {
    std::vector<std::vector<int>> matrix {{1, 2, 1, 2}, {5, 5, 5, 5}, {6, 3, 6, 3}};
    Solution2946 s;
    EXPECT_TRUE(s.areSimilar(matrix, 2));
}

TEST(Leetcode2946Test, EmptyTest) {
    std::vector<std::vector<int>> matrix {{}};
    Solution2946 s;
    EXPECT_TRUE(s.areSimilar(matrix, 2));
}

TEST(Leetcode2946Test, BigKTest) {
    std::vector<std::vector<int>> matrix {{1, 2, 1, 2}, {5, 5, 5, 5}, {6, 3, 6, 3}};
    Solution2946 s;
    EXPECT_TRUE(s.areSimilar(matrix, 20));
}

TEST(Leetcode2946Test, FalseTest) {
    std::vector<std::vector<int>> matrix {{1, 2, 1, 2}, {5, 5, 4, 5}, {6, 3, 6, 3}};
    Solution2946 s;
    EXPECT_FALSE(s.areSimilar(matrix, 2));
}
