//
// Created by quinn on 12/15/2024.
//

#ifndef LEETCODE51_H
#define LEETCODE51_H

#include <string>
#include <algorithm>

class Solution51 {
public:
    std::string reverseWords(std::string s) {
        std::reverse(s.begin(), s.end());
        std::string res;
        auto start = s.find_first_not_of(' ');
        while (start != std::string::npos) {
            auto end = s.find_first_of(' ', start);
            auto temp = s.substr(start, end - start);
            std::reverse(temp.begin(), temp.end());
            res += temp;
            if (end == std::string::npos) {
                break;
            }

            res += ' ';
            start = s.find_first_not_of(' ', end);
        }

        res.erase(std::find_if(res.rbegin(), res.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), res.end());


        return res;
    }
};

#endif //LEETCODE51_H
