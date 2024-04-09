//
// Created by Robert on 2024/3/31.
//

#pragma once
#include <string>
#include <vector>

/**
 * Definition for a binary tree node.
 * */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution257 {
public:
    std::vector<std::string> binaryTreePaths(TreeNode* root) {
        std::vector<std::string> ret;
        std::string path {""};
        binaryTreePaths(root, path, ret);
        return ret;
    }

private:
    void binaryTreePaths(TreeNode* root, std::string path, std::vector<std::string>& vec) {
        path += std::to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            vec.push_back(path);
        } 
        
        if (root->left != nullptr) {
            std::string localPath =  path + "->";
            binaryTreePaths(root->left, localPath, vec);
        }

        if (root->right != nullptr) {
            std::string localPath =  path + "->";
            binaryTreePaths(root->right, localPath, vec);
        }
    }
};