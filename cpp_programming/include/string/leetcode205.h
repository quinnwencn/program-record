//
// Created by Robert on 2024/4/7.
//
#pragma once
#include <string>
#include <vector>

class Solution205 {
public: 
    bool isIsomorphic(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::vector<int> indexS(256, -1);
        std::vector<int> indexT(256, -1);
        for (auto i = 0; i < s.length(); ++i) {
            if (indexS[s[i]] != indexT[t[i]]) {
                return false;
            }

            indexS[s[i]] = i;
            indexT[t[i]] = i;
        }

        return true;
    }
};