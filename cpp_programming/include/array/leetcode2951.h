//
// Created by Robert on 2023/12/27.
//

#pragma once
#include <vector>

class Solution2951 {
public:
    std::vector<int> findPeaks(std::vector<int>& mountain) {
        auto size = mountain.size();
        std::vector<int> ret;
        for (auto i = 1; i < size - 1; i++) {
            if ((mountain[i] > mountain[i - 1]) && (mountain[i] > mountain[i + 1])) {
                ret.push_back(i);
            }
        }

        return ret;
    }
};
