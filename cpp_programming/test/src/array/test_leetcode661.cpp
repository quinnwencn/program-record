//
// Created by Robert on 2024/3/6.
//

#include <gtest/gtest.h>

#include <array/leetcode661.h>

using namespace std;

namespace {

void TestFunction(vector<vector<int>>& img, vector<vector<int>>& result) {
    Solution661 s;
    auto ret = s.imageSmoother(img);
    for (auto r = 0; r < img.size(); r++) {
        for (auto c = 0; c < img[0].size(); c++) {
            EXPECT_EQ(ret[r][c], result[r][c]);
        }
    }
}

}

TEST(Leetcode661Test, testcase1) {
    vector<vector<int>> img {{1,1,1},{1,0,1},{1,1,1}};
    vector<vector<int>> result {{0,0,0},{0,0,0},{0,0,0}};

    TestFunction(img, result);
}

TEST(Leetcode661Test, testcase2) {
    vector<vector<int>> img {{100,200,100},{200,50,200},{100,200,100}};
    vector<vector<int>> result {{137,141,137},{141,138,141},{137,141,137}};

    TestFunction(img, result);
}