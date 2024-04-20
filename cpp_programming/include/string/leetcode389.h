#pragma once
#include <array>
#include <string>

class Solution389 {
public:
    char findTheDifference(std::string s, std::string t) {
        std::array<uint16_t, 26> chars {0};
        for (auto c: s) {
            chars[c - 'a']++;
        }

        for (auto c: t) {
            if (chars[c - 'a'] == 0) {
                return c;
            }
            chars[c - 'a']--;
        }

        return ' ';
    }
};