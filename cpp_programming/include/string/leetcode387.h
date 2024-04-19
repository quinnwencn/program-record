#pragma once 
#include <string>
#include <array>

class Solution387 {
public:
    int firstUniqChar(std::string s) {
        std::array<uint32_t, 26> alpha {0};
        for (auto c: s) {
            alpha[c - 'a']++;
        }

        for (auto i = 0; i < s.length(); ++i) {
            if (alpha[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};