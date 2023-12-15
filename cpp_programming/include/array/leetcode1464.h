#pragma once
#include <algorithm>
#include <vector>

class Solution1464 {
public:
    int maxProduct(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        auto max = nums[nums.size() - 1];
        auto sec = nums[nums.size() - 2];
        return (max - 1) * (sec - 1);
    }
};

class Solution1464_2 {
public:
    int maxProduct(std::vector<int>& nums) {
        int max = nums[0];
        int sec = 0;
        for (uint16_t i = 1; i < nums.size(); ++i) {
            auto tmp = std::min(max, nums[i]);
            max = std::max(max, nums[i]);
            sec = std::max(tmp, sec);
        }

        return (max - 1) * (sec - 1);
    }
};