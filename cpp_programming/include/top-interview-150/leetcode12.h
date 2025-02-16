//
// Created by quinn on 12/14/2024.
//

#ifndef LEETCODE12_H
#define LEETCODE12_H

#include <unordered_map>
#include <string>

class Solution12 {
public:
    std::string intToRoman(int num) {
        std::string res;

        minus(num, 1000, res);
        minus(num, 100, res);
        minus(num, 10, res);

        while (num > 0) {
            res += 'I';
            num--;
        }

        return res;
    }

private:
    static void minus(int& num, int measure, std::string& res) {
        static std::unordered_map<int, char> roman {
                {1, 'I'},
                {5, 'V'},
                {10, 'X'},
                {50, 'L'},
                {100, 'C'},
                {500, 'D'},
                {1000, 'M'}
        };
        int count = num / measure;
        num %= measure;
        while (count > 0) {
            res += roman[measure];
            count--;
        }

        if (num >= measure * 0.9) {
            res += roman[measure * 0.1];
            res += roman[measure];
            num -= measure * 0.9;
        }

        if (num >= measure / 2) {
            res += roman[measure / 02];
            num -= measure / 2;
        }

        if (num >= measure * 0.4) {
            res += roman[measure * 0.1];
            res += roman[measure / 2];
            num -= measure * 0.4;
        }
    }
};

#endif //LEETCODE12_H
