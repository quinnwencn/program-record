//
// Created by Robert on 2024/3/13.
//

#pragma once
#include <vector>
#include <string>
#include <numeric>

class Solution684 {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> results;
        for (auto& s: operations) {
            auto size = results.size();
            if (s == "+") {
                results.push_back(results[size - 1] + results[size - 2]);
            } else if (s == "D") {
                results.push_back(results[size - 1] * 2);
            } else if (s == "C") {
                results.pop_back();
            } else {
                results.push_back(stoi(s));
            }
        }

        return std::accumulate(results.begin(), results.end(), 0);
    }
};