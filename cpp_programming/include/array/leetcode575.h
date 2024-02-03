//
// Created by Robert on 2024/2/3.
//

#ifndef LEETCODE575_H
#define LEETCODE575_H
#include <vector>

class Solution575 {
public:
    int distributeCandies(std::vector<int>& candyType) {
        int count = 0;
        bool visited[200001] {false};
        for (auto i: candyType) {
            if (!visited[i + 100000]) {
                visited[i + 100000] = true;
                count++;
            }
        }

        return candyType.size() / 2 < count ? candyType.size() / 2 : count;
    }
};

#endif //LEETCODE575_H
