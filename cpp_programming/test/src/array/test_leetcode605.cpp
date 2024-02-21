//
// Created by Robert on 2024/2/21.
//
#include <gtest/gtest.h>

#include <array/leetcode605.h>

TEST(Leetcode605Test, case1) {
    std::vector<int> flowerbed {1,0,0,0,1};
    Solution605 s;
    EXPECT_TRUE(s.canPlaceFlowers(flowerbed, 1));
}

TEST(Leetcode605Test, case2) {
    std::vector<int> flowerbed {0,0,1,0,1};
    Solution605 s;
    EXPECT_TRUE(s.canPlaceFlowers(flowerbed, 1));
}

TEST(Leetcode605Test, case3) {
    std::vector<int> flowerbed {0,0,1,0,1};
    Solution605 s;
    EXPECT_FALSE(s.canPlaceFlowers(flowerbed, 2));
}

TEST(Leetcode605Test, case4) {
    std::vector<int> flowerbed {1,0,0,0,1};
    Solution605 s;
    EXPECT_FALSE(s.canPlaceFlowers(flowerbed, 2));
}
