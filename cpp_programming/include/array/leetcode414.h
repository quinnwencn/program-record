//
// Created by Robert on 2024/1/17.
//

#pragma once
#include <algorithm>
#include <vector>

class Solution414 {
public:
    int thirdMax(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        auto ip = std::unique(nums.begin(), nums.end());
        nums.resize(std::distance(nums.begin(), ip));
        if (nums.size() > 2) {
            return nums[nums.size() - 3];
        }

        return nums[nums.size() - 1];
    }
};