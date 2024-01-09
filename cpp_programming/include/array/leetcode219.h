//
// Created by Robert on 2024/1/9.
//

#pragma once
#include <unordered_map>
#include <vector>

class Solution219 {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> indexMap;
        for (auto i = 0; i < nums.size(); ++i) {
            if (indexMap.find(nums[i]) != indexMap.end()) {
                if (i - indexMap[nums[i]] <= k) {
                    return true;
                }
            }
            indexMap[nums[i]] = i;
        }
        return false;
    }
};