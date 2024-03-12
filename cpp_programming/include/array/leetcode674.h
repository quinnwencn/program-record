//
// Created by Robert on 2024/3/12.
//

#pragma once
#include <vector>

class Solution674 {
public:
    int findLengthOfLCIS(std::vector<int>& nums) {
        int ret = 1;
        int left = 0, right = 0;
        auto size = nums.size();
        while (right < size) {
            ret = std::max(ret, right - left + 1);
            if ((right + 1 >= size) || (nums[right] >= nums[right + 1])) {
                left = right + 1;
            }
            right++;
        }

        return ret;
    }
};