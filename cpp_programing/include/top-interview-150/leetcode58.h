#pragma once
#include <string>

class Solution58 {
public:
    int lengthOfLastWord(std::string s) {
        int pos = s.find_last_not_of(' ');
        int ret = 0;
        while (pos >= 0 && s[pos] != ' ') {
            ret++;
            pos--;
        }

        return ret;
    }
};
