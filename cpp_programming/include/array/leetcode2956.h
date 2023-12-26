//
// Created by Robert on 2023/12/26.
//

#pragma once
#include <unordered_set>
#include <vector>

class Solution2956 {
public:
    std::vector<int> findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) {
        auto len1 = nums1.size();
        auto len2 = nums2.size();

        int count1 = 0;
        int count2 = 0;
        std::unordered_set<int> visited1;
        for (auto i : nums1) {
            visited1.insert(i);
        }

        std::unordered_set<int> visited2;
        for (auto i : nums2) {
            if (visited1.find(i) != visited1.end()) {
                count2++;
            }
            visited2.insert(i);
        }

        for (auto i : nums1) {
            if (visited2.find(i) != visited2.end()) {
                count1++;
            }
        }

        return std::vector<int> {count1, count2};
    }
};