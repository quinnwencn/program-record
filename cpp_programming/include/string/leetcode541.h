#pragma once
#include <string>
#include <algorithm>

class Solution541 {
public:
    std::string reverseStr(std::string s, int k) {
        int start = 0;
        int val = k;
        while (start < s.length()) {
            if (s.length() - start < k) {
                val = s.length() - start;
            }
            std::reverse(s.begin() + start, s.begin() + start + val);
            start += k * 2;
        }

        return s;
    }
};