//
// Created by quinn on 12/14/2024.
//

#ifndef LEETCODE13_H
#define LEETCODE13_H
#include <unordered_map>
#include <std::string>

class Solution13 {
public:
    int romanToInt(std::string s) {
        static std::unordered_map<char, int> roman {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
        };

        int total = 0;
        for (auto i = 0; i < s.size(); i++) {
            total += roman[s[i]];
            if (i > 0 && roman[s[i]] > roman[s[i - 1]]) {
                total -= roman[s[i - 1]] * 2;
            }
        }

        return total;
    }
};

#endif //LEETCODE13_H
