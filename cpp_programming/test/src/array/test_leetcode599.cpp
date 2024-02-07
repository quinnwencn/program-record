//
// Created by Robert on 2024/2/7.
//
#include <gtest/gtest.h>
#include <algorithm>

#include <array/leetcode599.h>

using namespace std;

TEST(Leetcode599Test, case1) {
    vector<string> list1 {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};
    Solution599 s;
    Solution599_2 s2;
    auto ret = s.findRestaurant(list1, list2);
    auto ret2 = s2.findRestaurant(list1, list2);
    EXPECT_EQ(ret.size(), 1);
    EXPECT_EQ(ret[0], "Shogun");
    EXPECT_EQ(ret2.size(), 1);
    EXPECT_EQ(ret2[0], "Shogun");
}

TEST(Leetcode599Test, case2) {
    vector<string> list1 {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 {"KFC","Shogun","Burger King"};
    Solution599 s;
    Solution599_2 s2;
    auto ret2 = s2.findRestaurant(list1, list2);
    auto ret = s.findRestaurant(list1, list2);
    EXPECT_EQ(ret.size(), 1);
    EXPECT_EQ(ret[0], "Shogun");
    EXPECT_EQ(ret2.size(), 1);
    EXPECT_EQ(ret2[0], "Shogun");
}

TEST(Leetcode599Test, case3) {
    vector<string> list1 {"happy","sad","good"};
    vector<string> list2 {"sad","happy","good"};
    Solution599 s;
    Solution599_2 s2;
    auto ret = s.findRestaurant(list1, list2);
    auto ret2 = s2.findRestaurant(list1, list2);
    EXPECT_EQ(ret2.size(), 2);
    EXPECT_TRUE(std::find(ret2.begin(), ret.end(), "sad") != ret2.end());
    EXPECT_TRUE(std::find(ret2.begin(), ret.end(), "happy") != ret2.end());
    EXPECT_EQ(ret.size(), 2);
    EXPECT_TRUE(std::find(ret.begin(), ret.end(), "sad") != ret.end());
    EXPECT_TRUE(std::find(ret.begin(), ret.end(), "happy") != ret.end());
}

TEST(Leetcode599Test, case4) {
    vector<string> list1 {"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string> list2 {"KNN","KFC","Burger King","Tapioca Express","Shogun"};
    Solution599 s;
    Solution599_2 s2;
    auto ret = s.findRestaurant(list1, list2);
    auto ret2 = s2.findRestaurant(list1, list2);
    EXPECT_EQ(ret2.size(), 4);
    EXPECT_TRUE(std::find(ret2.begin(), ret.end(), "Shogun") != ret2.end());
    EXPECT_TRUE(std::find(ret2.begin(), ret.end(), "Tapioca Express") != ret2.end());
    EXPECT_TRUE(std::find(ret2.begin(), ret.end(), "Burger King") != ret2.end());
    EXPECT_TRUE(std::find(ret2.begin(), ret.end(), "KFC") != ret2.end());
    EXPECT_EQ(ret.size(), 4);
    EXPECT_TRUE(std::find(ret.begin(), ret.end(), "Shogun") != ret.end());
    EXPECT_TRUE(std::find(ret.begin(), ret.end(), "Tapioca Express") != ret.end());
    EXPECT_TRUE(std::find(ret.begin(), ret.end(), "Burger King") != ret.end());
    EXPECT_TRUE(std::find(ret.begin(), ret.end(), "KFC") != ret.end());
}