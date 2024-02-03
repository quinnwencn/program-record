#pragma once
#include <algorithm>
#include <vector>

class Solution26 {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        std::unique(nums.begin(), nums.end());
        int i = 0;
        for (; i < nums.size() - 1; i++) {
            if (nums[i] >= nums[i + 1]) {
                break;
            }
        }

        return i + 1;
    }
};
