//
// Created by Robert on 2023/12/21.
//

#pragma once
#include <vector>

class Solution2960 {
public:
    int countTestedDevices(std::vector<int>& batteryPercentages) {
        int decreases = 0;
        for (auto i : batteryPercentages) {
            if (i - decreases > 0) {
                decreases++;
            }
        }

        return decreases;
    }
};
