//
// Created by Robert on 2023/12/16.
//

#pragma once
#include <string>

#include <array>

class Solution242 {
public:
    bool isAnagram(std::string s, std::string t) {
        int slen = s.length();
        if (slen != t.length()) {
            return false;
        }

        std::array<int, 26> letters {0};
        for (int i = 0; i < slen; ++i) {
            letters[s[i] - 'a']++;
        }

        for (int i = 0; i < slen; ++i) {
            letters[t[i] - 'a']--;
        }

        for (auto i : letters) {
            if (i != 0) {
                return false;
            }
        }

        return true;
    }
};
