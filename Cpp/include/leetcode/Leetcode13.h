#pragma once
#include <unordered_map>
#include <cstdint>

class Solution13 {
public:
  int romanToInt(std::string s) {
    static std::unordered_map<char, int> romanMap {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int res = 0;
    for (auto i = 0; i < s.length(); ++i) {
      if ((i + 1 < s.length()) && (romanMap[s[i]] < romanMap[s[i + 1]])) {
        res += (romanMap[s[i + 1]] - romanMap[s[i]]);
        i++;
      } else {
        res += romanMap[s[i]];
      }
    }
    return res;
  }
};
