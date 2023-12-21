//
// Created by Robert on 2023/12/21.
//

#pragma once
#include <vector>

class Solution1913 {
public:
    int maxProductDifference(std::vector<int>& nums) {
        int maximum = 0;
        int secondMaximum = 0;
        int minimum = 10000;
        int secondMinimum = 10000;
        for (auto i : nums) {
            int tmp = maximum;
            maximum = std::max(maximum, i);
            if (maximum == i) {
                secondMaximum = std::max(secondMaximum, tmp);
            } else {
                secondMaximum = std::max(secondMaximum, i);
            }

            tmp = minimum;
            minimum = std::min(minimum, i);
            if (minimum == i) {
                secondMinimum = std::min(secondMinimum, tmp);
            } else {
                secondMinimum = std::min(secondMinimum, i);
            }
        }

        return maximum * secondMaximum - minimum * secondMinimum;
    }
};
