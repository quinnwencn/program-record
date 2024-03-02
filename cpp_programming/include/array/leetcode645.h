//
// Created by Robert on 2024/3/2.
//

#pragma once
#include <vector>

class Solution645 {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        int nonDuplicateSum = 0;
        auto size = nums.size();
        int sum = size * (size + 1) / 2;
        std::vector<int> visited (nums.size(), 0);
        std::vector<int> ret(2, 0);
        for (auto val: nums) {
            if (visited[val - 1] == 0) {
                nonDuplicateSum += val;
                visited[val - 1] = 1;
            } else {
                ret[0] = val;
            }
        }

        ret[1] = sum - nonDuplicateSum;
        return ret;
    }
};