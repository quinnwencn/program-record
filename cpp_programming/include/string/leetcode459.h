#pragma once
#include <string>

class Solution459 {
public:
    bool repeatedSubstringPattern(std::string s) {
        auto len = s.length();
        if (len % 2) {
            return false;
        }

        auto size = s.find(s[0], 1);
        if (size == std::string::npos || size > len / 2) {
            return false;
        }

        auto times = len / size;
        for (auto i = 0; i < times; ++i) {
            for (auto j = 0; j < size; ++j) {
                if (s[j] != s[i * size + j]) {
                    return false;
                }
            }
        }

        return true;
    }
};