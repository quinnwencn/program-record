//
// Created by Robert on 2023/12/27.
//
#include <gtest/gtest.h>

#include <array/leetcode2951.h>

TEST(Leetcode2951Test, NoPeakTest) {
    std::vector<int> mountain {1, 1, 4};
    Solution2951 s;
    auto ret = s.findPeaks(mountain);
    EXPECT_EQ(ret.size(), 0);
}

TEST(Leetcode2951Test, OnePeakTest) {
    std::vector<int> mountain {1, 1, 4, 2};
    Solution2951 s;
    auto ret = s.findPeaks(mountain);
    EXPECT_EQ(ret.size(), 1);
    EXPECT_EQ(ret[0], 2);
}

TEST(Leetcode2951Test, TwoPeakTest) {
    std::vector<int> mountain {1, 4, 3, 8, 5};
    Solution2951 s;
    auto ret = s.findPeaks(mountain);
    EXPECT_EQ(ret.size(), 2);
    EXPECT_EQ(ret[0], 1);
    EXPECT_EQ(ret[1], 3);
}
