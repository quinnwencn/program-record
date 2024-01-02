//
// Created by Robert on 2024/1/2.
//

#pragma once
#include <vector>

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution108 {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) { return CreateBST(nums, 0, nums.size() - 1); }

    TreeNode* CreateBST(const std::vector<int>& nums, int l, int r) {
        if (l > r) {
            return nullptr;
        }

        auto mid = l + (r - l) / 2;
        auto root = new TreeNode(nums[mid]);
        root->left = CreateBST(nums, l, mid - 1);
        root->right = CreateBST(nums, mid + 1, r);
        return root;
    }
};
