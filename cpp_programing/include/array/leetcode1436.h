//
// Created by Robert on 2023/12/15.
//

#pragma once
#include <set>
#include <string>
#include <vector>

class Solution1436 {
public:
    std::string destCity(std::vector<std::vector<std::string>>& paths) {
        std::set<std::string> start;
        for (auto& path : paths) {
            start.insert(path[0]);
        }

        for (auto& path : paths) {
            if (start.find(path[1]) == start.end()) {
                return path[1];
            }
        }

        // never reach here
        return "";
    }
};