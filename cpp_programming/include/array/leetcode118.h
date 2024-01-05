//
// Created by Robert on 2024/1/4.
//

#pragma once
#include <vector>

class Solution118 {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> ret;
        for (auto i = 0; i < numRows; ++i) {
            std::vector<int> tmp;
            for (auto j = 0; j < i + 1; ++j) {
                if ((ret.size() > j) && (j - 1 >= 0) && (j < ret[i - 1].size())) {
                    tmp.push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
                } else {
                    tmp.push_back(1);
                }
            }
            ret.push_back(std::move(tmp));
        }

        return ret;
    }
};