//
// Created by Robert on 2024/2/7.
//

#ifndef LEETCODE599_H
#define LEETCODE599_H

#include <vector>
#include <string>
#include <unordered_map>

class Solution599 {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2) {
        std::vector<std::string> ret;
        auto minIndex = list1.size() + list2.size();
        for (uint16_t i = 0; i < list1.size(); ++i) {
            for (uint16_t j = 0; j < list2.size(); ++j) {
                if (list1[i] == list2[j]) {
                    if (i + j > minIndex ) {
                        continue;
                    } else if (i + j < minIndex) {
                        ret.clear();
                        minIndex = i + j;
                    }
                    
                    ret.push_back(list1[i]); 
                }
            }
        }
        return ret;
    }
};

class Solution599_2 {
public:
    std::vector<std::string> findRestaurant(std::vector<std::string>& list1, std::vector<std::string>& list2) {
        std::unordered_map<std::string, uint16_t> indexMap;
        for (uint16_t i = 0; i < list1.size(); ++i) {
            indexMap[list1[i]] = i;
        }

        uint16_t minIndex = list1.size() + list2.size();
        std::vector<std::string> ret;
        for (uint16_t i = 0; i < list2.size(); ++i) {
            if (indexMap.find(list2[i]) != indexMap.end()) {
                auto j = indexMap[list2[i]];
                if (i + j > minIndex) {
                    continue;
                } else if (i + j < minIndex) {
                    ret.clear();
                    minIndex = j + i;
                }
                ret.push_back(list2[i]);
            }
        }
        return ret;
    }
};

#endif //LEETCODE599_H
