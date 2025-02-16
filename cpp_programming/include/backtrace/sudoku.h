//
// Created by quinn on 2/16/2025.
//

#ifndef SUDOKU_H
#define SUDOKU_H

#include <vector>
#include <array>
#include <cstdint>

class Sudoku {
public:
    // input is an array, which size is 9 * 9. with number from 1 - 9,
    // 0 means the number shall be replaced by a number in range 1~9
    bool solution(std::vector<std::vector<int>>& num) {
        for (auto i = 0; i < num.size(); ++i) {
            for (auto j = 0; j < num[0].size(); ++j) {
                if (num[i][j] == 0) {
                    for (auto val = 1; val <= num.size(); ++val) {
                        if (isValid(num, i, j, val)) {
                            num[i][j] = val;
                            if (solution(num)) {
                                return true;
                            }
                            num[i][j] = 0;
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

private:
    bool isValid(std::vector<std::vector<int>>&num, size_t row, size_t col, int val) {
        for (auto i = 0; i < num.size(); ++i) {
            if (num[i][col] == val) {
                return false;
            }
        }

        for (auto i = 0; i < num[0].size(); ++i) {
            if (num[row][i] == val) {
                return false;
            }
        }

        size_t matrixRowStart = row - row % 3;
        size_t matrixColStart = col - col % 3;
        for (auto i = matrixRowStart; i < matrixRowStart + 3; ++i) {
            for (auto j = matrixColStart; j < matrixColStart + 3; ++j) {
                if (num[i][j] == val) {
                    return false;
                }
            }
        }

        return true;
    }

};

#endif //SUDOKU_H
