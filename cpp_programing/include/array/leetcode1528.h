#pragma once
#include <numeric>
#include <vector>

class Solution1528 {
public:
    int numSpecial(std::vector<std::vector<int>>& mat) {
        int sum = 0;
        int pos = 0;
        int ret = 0;
        int rowSize = mat.size();
        int colSize = mat[0].size();
        for (int i = 0; i < colSize; ++i) {
            for (int j = 0; j < rowSize; ++j) {
                if (mat[j][i] == 1) {
                    sum++;
                    pos = j;
                }
            }
            if ((sum == 1) && std::accumulate(mat[pos].begin(), mat[pos].end(), 0) == 1) {
                ret++;
            }
            sum = 0;
        }

        return ret;
    }
};
