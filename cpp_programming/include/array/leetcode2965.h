//
// Created by Robert on 2023/12/25.
//

#pragma once
#include <vector>

class Solution {
public:
    std::vector<int> findMissingAndRepeatedValues(std::vector<std::vector<int>>& grid) {
        int size = grid.size();
        std::vector<int> count(size * size, 0);
        for (auto& v : grid) {
            for (auto i : v) {
                count[i - 1]++;
            }
        }

        int visited = 0;
        int unvisited = 0;
        for (int i = 0; i < size * size; ++i) {
            if (count[i] == 2) {
                visited = i + 1;
            }

            if (count[i] == 0) {
                unvisited = i + 1;
            }
        }

        return std::vector<int> {visited, unvisited};
    }
};