//
// Created by Quinn Wen on 2024/8/1.
//

#ifndef CPPPROGRAMRECORD_LEETCODE80_H
#define CPPPROGRAMRECORD_LEETCODE80_H

#include <vector>

class Solution80 {
public:
    int removeDuplicates(std::vector<int>& nums) {
        auto size = nums.size();
        if (nums.size() == 0) {
            return 0;
        }

        int count = 2;
        int value = nums[0];
        for (auto i = 0; i < size; ++i) {
            if (nums[i] == value) {
                count--;
                if (count < 0) {
                    nums.erase(nums.begin() + i);
                    size--;
                    count++;
                    i--;
                }
            } else {
                value = nums[i];
                count = 1;
            }
        }

        return size;
    }
};

#endif //CPPPROGRAMRECORD_LEETCODE80_H
