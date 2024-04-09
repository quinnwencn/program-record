#include <string/leetcode257.h>

#include <gtest/gtest.h>

TEST(Leetcode257Test, Testcase) {
    auto root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    Solution257 so;
    auto res = so.binaryTreePaths(root);
    EXPECT_EQ(res.size(), 2);
    EXPECT_EQ(res[0], "1->2->5");
    EXPECT_EQ(res[1], "1->3");

    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
}