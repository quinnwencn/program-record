//
// Created by Robert on 2024/2/21.
//

#pragma once
#include <vector>

class Solution605 {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        bool isPlanted {false};
        for (uint16_t i = 0; i < flowerbed.size() - 1; ++i) {
            if (flowerbed[i] == 0) {
                if (!isPlanted && flowerbed[i + 1] == 0) {
                    n--;
                    isPlanted = true;
                } else {
                    isPlanted = false;
                }
            } else {
                isPlanted = true;
            }
        }

        if (!isPlanted && flowerbed[flowerbed.size() - 1] == 0) {
            n--;
        }
        return n <= 0;
    }
};
