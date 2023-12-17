//
// Created by Robert on 2023/12/17.
//

#pragma once
#include <unordered_map>
#include <vector>

class Solution1 {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> visited;
        for (auto i = 0; i < nums.size(); ++i) {
            int tmp = target - nums[i];
            if (visited.count(tmp)) {
                return std::vector<int> {visited[tmp], i};
            }

            visited[nums[i]] = i;
        }

        return std::vector<int>();
    }
};
