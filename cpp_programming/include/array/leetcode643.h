//
// Created by Robert on 2024/3/2.
//

#pragma once
#include <vector>
#include <numeric>

class Solution643 {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        int left = 0, right = k - 1;
        int sum = std::accumulate(nums.begin(), nums.begin() + k, 0);
        int maxSum = sum;
        while (right < nums.size() - 1) {
            sum -= nums[left];
            left++;
            right++;
            sum += nums[right];
            maxSum = std::max(sum, maxSum);
        }

        return static_cast<double>(maxSum) / static_cast<double>(k);
    }
};