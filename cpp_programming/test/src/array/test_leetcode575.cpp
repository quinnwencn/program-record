//
// Created by Robert on 2024/2/3.
//
#include <gtest/gtest.h>

#include <array/leetcode575.h>

TEST(Leetcode575, Testcase1) {
    std::vector<int> candy {1,1,2,2,3,3};
    Solution575 s;
    EXPECT_EQ(s.distributeCandies(candy), 3);
}

TEST(Leetcode575, Testcase2) {
    std::vector<int> candy {1,1,2,3};
    Solution575 s;
    EXPECT_EQ(s.distributeCandies(candy), 2);
}

TEST(Leetcode575, Testcase3) {
    std::vector<int> candy {6,6,6,6};
    Solution575 s;
    EXPECT_EQ(s.distributeCandies(candy), 1);
}
