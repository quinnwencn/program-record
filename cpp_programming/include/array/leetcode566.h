//
// Created by Robert on 2024/2/22.
//

#pragma once
#include <vector>

class Solution566 {
public:
    std::vector<std::vector<int>> matrixReshape(std::vector<std::vector<int>>& mat, int r, int c) {
        int row = mat.size();
        if (row == 0) {
            return mat;
        }
        int col = mat[0].size();
        if (row * col != r * c) {
            return mat;
        }

        std::vector<std::vector<int>> ret(r, std::vector<int>(c, 0));
        int ri = 0; 
        int ci = 0;
        for (auto j = 0; j < r; j++) {
            for (auto i = 0; i < c; ++i) {
                if (ci >= col) {
                    ri++;
                    ci = 0;
                }
                ret[j][i] = mat[ri][ci];
                ci++;
            }
        }

        return ret;
    }
};
