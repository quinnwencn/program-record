#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <iostream>

class Solution290 {
public:
    bool wordPattern(std::string pattern, std::string s) {
        std::stringstream ss {s};
        std::vector<std::string> words;
        std::string word;
        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.length()) {
            return false;
        }

        std::unordered_map<char, int> charPattern;
        std::unordered_map<std::string, int> sPattern;
        for (auto i = 0; i < words.size(); ++i) {
            if (charPattern.contains(pattern[i]) && sPattern.contains(words[i]) && charPattern[pattern[i]] == sPattern[words[i]]) {
                continue;
            } else if (!charPattern.contains(pattern[i]) && !sPattern.contains(words[i])) {
                charPattern[pattern[i]] = i;
                sPattern[words[i]] = i;
            } else {
                return false;
            }
        }

        return true;
    }
};