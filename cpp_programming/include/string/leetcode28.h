//
// Created by Robert on 2023/12/15.
//

#pragma once
#include <string>

class Solution28 {
public:
    int strStr(std::string haystack, std::string needle) {
        auto pos = haystack.find(needle);
        if (pos == haystack.npos) {
            return -1;
        }

        return pos;
    }
};