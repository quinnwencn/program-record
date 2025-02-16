//
// Created by quinn on 12/14/2024.
//

#ifndef LEETCODE42_H
#define LEETCODE42_H

#include <vector>
#include <map>
#include <cmath>

class Solution42 {
public:
    int trap(std::vector<int>& height) {
        if (height.size() == 0) {
            return 0;
        }

        int left = 0, right = height.size() - 1;
        int maxLeft = 0, maxRight = 0;
        int totalTraps = 0;
        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] > maxLeft) {
                    maxLeft = height[left];
                } else {
                    totalTraps += maxLeft - height[left];
                }
                left++;
            } else {
                if (height[right] > maxRight) {
                    maxRight = height[right];
                } else {
                    totalTraps += maxRight - height[right];
                }

                right--;
            }
        }

        return totalTraps;
    }
};


#endif //LEETCODE42_H
