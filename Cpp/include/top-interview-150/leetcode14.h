#pragma once
#include <string>
#include <vector>

using namespace std;

class Solution14 {
public:
  string longestCommonPrefix(vector<string>& strs) {
    size_t size = strs.size();
    string ret {""};
    if (size == 0) {
      return ret;
    }
    std::sort(strs.begin(), strs.end());
    size_t pos = 0;
    while ((pos < strs[0].length()) && (pos < strs[size - 1].length())) {
      if (strs[0][pos] == strs[size-1][pos]) {
        ret += strs[0][pos];
        pos++;
      } else {
        break;
      }
    }

    return ret;
  }
};