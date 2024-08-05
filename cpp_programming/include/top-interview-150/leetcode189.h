//
// Created by Quinn on 2024/8/5.
//

#ifndef CPPPROGRAMRECORD_LEETCODE189_H
#define CPPPROGRAMRECORD_LEETCODE189_H

#include <vector>
#include <algorithm>

class Solution189 {
public:
    void rotate(std::vector<int>& nums, int k) {
        k %= nums.size();

        std::vector<int> res;
        res.reserve(nums.size());
        res.insert(res.begin(), nums.begin() + nums.size() - k, nums.end());
        res.insert(res.end(), nums.begin(), nums.begin() + nums.size() - k);

        std::swap(res, nums);
    }

    void rotate1(std::vector<int>& nums, int k) {
        k %= nums.size();
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin() + k);
        std::reverse(nums.begin() + k, nums.end());
    }
};

#endif //CPPPROGRAMRECORD_LEETCODE189_H
