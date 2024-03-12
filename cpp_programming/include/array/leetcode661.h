//
// Created by Robert on 2024/3/6.
//
#pragma once
#include <vector>

class Solution661 {
public:
    std::vector<std::vector<int>> imageSmoother(std::vector<std::vector<int>>& img) {
        size_t row = img.size();
        size_t col = img[0].size();
        std::vector<std::vector<int>> ret (row, std::vector<int>(col, 0));
        for (auto r = 0; r < row; r++) {
            for (auto c = 0; c < col; c++) {
                std::array<int, 3> range {-1, 0, 1};
                int sum = 0;
                int div = 0;
                for (auto ri: range) {
                    for (auto ci: range) {
                        if ((r + ri < row) && (c + ci < col) && (r + ri >= 0) && (c + ci >= 0)) {
                            sum += img[r + ri][c + ci];
                            div++;
                        }
                    }
                }
                ret[r][c] = sum / div;
            }
        }
        return ret;
    }
};