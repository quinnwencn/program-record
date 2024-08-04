//
// Created by Quinn on 2024/8/4.
//

#ifndef CPPPROGRAMRECORD_LEETCODE169_H
#define CPPPROGRAMRECORD_LEETCODE169_H

#include <vector>

class Solution169 {
public:
    int majorityElement(std::vector<int>& nums) {
        int count = 0;
        int candidate = nums.front();
        for (auto i: nums) {
            if (count == 0) {
                candidate = i;
                count++;
            } else if (count > 0) {
                if (i == candidate) {
                    count++;
                } else {
                    count--;
                }
            }
        }

        return candidate;
    }
};

#endif //CPPPROGRAMRECORD_LEETCODE169_H
