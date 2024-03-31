//
// Created by Robert on 2024/3/31.
//

#pragma once
#include <string>

std::string addBinary(std::string a, std::string b) {
    int carry = 0;
    auto len_of_a = a.length();
    auto len_of_b = b.length();
    int len = len_of_a > len_of_b ? len_of_b : len_of_a;
    std::string ret {};
    auto i = 0;
    for (; i < len; ++i) {
        int tmp = a[len_of_a - 1 - i] - '0' + b[len_of_b - 1 - i] - '0' + carry;
        carry = tmp / 2;
        tmp = tmp % 2;
        ret += std::to_string(tmp);
    }

    if (len_of_a > len_of_b) {
        while (i < len_of_a) {
            int tmp = a[len_of_a - 1 - i] - '0' + carry;
            carry = tmp / 2;
            tmp = tmp % 2;
            ret += std::to_string(tmp);
            ++i;
        }
    } else {
        while (i < len_of_b) {
            int tmp = b[len_of_b - 1 - i] - '0' + carry;
            carry = tmp / 2;
            tmp = tmp % 2;
            ret += std::to_string(tmp);
            ++i;
        }
    }

    if (carry) {
        ret += std::to_string(carry);
    }

    std::reverse(ret.begin(), ret.end());
    return ret;
}