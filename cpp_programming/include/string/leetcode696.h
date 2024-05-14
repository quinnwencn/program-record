#pragma once
#include <string>

class Solution696 {
public:
    int countBinarySubstrings(std::string s) {
        int count { 0 };
        for (auto i = 0; i < s.length(); ++i) {
            auto r = i;
            int refCount = 0;
            while (r < s.length() && s[r] == s[i]) {
                refCount++;
                r++;
            }

            auto rr = r;
            while (rr < s.length() && s[rr] == s[r]) {
                refCount--;
                if (refCount == 0) {
                    break;
                }
                rr++;
            }

            if (refCount == 0) {
                count++;
            }
        }

        return count;
    }
};