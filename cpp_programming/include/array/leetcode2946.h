//
// Created by Robert on 2023/12/28.
//

#pragma once
#include <vector>

class Solution2946 {
public:
    bool areSimilar(std::vector<std::vector<int>>& mat, int k) {
        auto size = mat[0].size();
        for (auto& v : mat) {
            for (auto i = 0; i < size; ++i) {
                if (v[(i + size + k) % size] != v[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};