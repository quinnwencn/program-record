//
// Created by Robert on 2024/1/13.
//

#pragma once
#include <vector>

class NumArray {
public:
    NumArray(std::vector<int>& nums) : sum_(nums.size(), 0) {
        sum_[0] = nums[0];
        for (auto i = 1; i < nums.size(); ++i) {
            sum_[i] = nums[i] + sum_[i - 1];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return sum_[right];
        }

        return sum_[right] - sum_[left - 1];
    }

private:
    std::vector<int> sum_;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
