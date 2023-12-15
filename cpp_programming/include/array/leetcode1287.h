#pragma once
#include <vector>

class Solution1287 {
public:
    int findSpecialInteger(std::vector<int>& arr) {
        size_t size = arr.size() / 4 + 1;
        int count = 0;
        int now = arr[0];
        for (auto e : arr) {
            if (e == now) {
                count++;
                if (count >= size) {
                    return e;
                }
            } else {
                now = e;
                count = 1;
            }
        }

        return now;
    }
};