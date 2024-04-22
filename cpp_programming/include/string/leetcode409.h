#pragma once 
#include <string>
#include <array>

class Solution409 {
public:
    int longestPalindrome(std::string s) {
        std::array<uint16_t, 100> chars {0};
        for (auto c: s) {
            chars[c - 'A']++;
        }

        uint16_t count {0};
        bool onceFlag {true};
        for (auto i: chars) {
            if ((i > 1) && (i % 2 == 0)) {
                count += i;
            } else {
                count += i > 0 ? i-1 : 0;
            }

            if (onceFlag && i % 2 == 1) {
                count++;
                onceFlag = false;
            }
        }

        return count;
    }
};