//
// Created by Robert on 2024/1/2.
//
#include <gtest/gtest.h>

#include <array/leetcode108.h>

TEST(Leetcode108Test, case1) {
    std::vector<int> nums {-10, -5, 0, 3, 9};
    Solution108 s;
    auto root = s.sortedArrayToBST(nums);
    EXPECT_EQ(root->val, 0);
    EXPECT_EQ(root->left->val, -10);
    EXPECT_EQ(root->left->right->val, -5);
    EXPECT_EQ(root->right->val, 3);
    EXPECT_EQ(root->right->right->val, 9);
}

TEST(Leetcode108Test, case2) {
    std::vector<int> nums {1, 3};
    Solution108 s;
    auto root = s.sortedArrayToBST(nums);
    EXPECT_EQ(root->val, 1);
    EXPECT_EQ(root->left, nullptr);
    EXPECT_EQ(root->right->val, 3);
}
