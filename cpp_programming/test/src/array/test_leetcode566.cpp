//
// Created by Robert on 2024/2/22.
//
#include <gtest/gtest.h>

#include <array/leetcode566.h>

TEST(Leetcode566Test, case1) {
    std::vector<std::vector<int>> mat {{1, 2}, {3, 4}};
    Solution566 s;
    auto ret = s.matrixReshape(mat, 1, 4);
    EXPECT_EQ(ret.size(), 1);
    EXPECT_EQ(ret[0].size(), 4);
    EXPECT_EQ(ret[0][0], 1);
    EXPECT_EQ(ret[0][1], 2);
    EXPECT_EQ(ret[0][2], 3);
    EXPECT_EQ(ret[0][3], 4);
}

TEST(Leetcode566Test, case2) {
    std::vector<std::vector<int>> mat {{1, 2}, {3, 4}};
    Solution566 s;
    auto ret = s.matrixReshape(mat, 2, 4);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0].size(), 2);
    EXPECT_EQ(ret[0][0], 1);
    EXPECT_EQ(ret[0][1], 2);
    EXPECT_EQ(ret[1][0], 3);
    EXPECT_EQ(ret[1][1], 4);
}

TEST(Leetcode566Test, case3) {
    std::vector<std::vector<int>> mat {{1, 2}, {3, 4}};
    Solution566 s;
    auto ret = s.matrixReshape(mat, 1, 1);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0].size(), 2);
    EXPECT_EQ(ret[0][0], 1);
    EXPECT_EQ(ret[0][1], 2);
    EXPECT_EQ(ret[1][0], 3);
    EXPECT_EQ(ret[1][1], 4);
}
