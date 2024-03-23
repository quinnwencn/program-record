//
// Created by Robert on 2024/3/23.
//

#pragma once
#include <string>
#include <stack>

class Solution20 {
public:
    bool isValid(std::string s) {
        std::stack<char> visited;
        for (auto c: s) {
            if (c == ')') {
                if (visited.size() == 0) {
                    return false;
                }
                if (visited.top() != '(') {
                    return false;
                }
                visited.pop();
            } else if (c == ']') {
                if (visited.size() == 0) {
                    return false;
                }
                if (visited.top() != '[') {
                    return false;
                }
                visited.pop();
            } else if (c == '}') {
                if (visited.size() == 0) {
                    return false;
                }
                if (visited.top() != '{') {
                    return false;
                }
                visited.pop();
            } else {
                visited.push(c);
            }
        }

        return visited.empty();
    }
};