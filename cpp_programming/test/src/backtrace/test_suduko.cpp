//
// Created by quinn on 2/16/2025.
//

#include <gtest/gtest.h>
#include "backtrace/sudoku.h"

TEST(SudokuTest, board9x9) {
    std::vector<std::vector<int>> board = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    Sudoku s;
    EXPECT_TRUE(s.solution(board));

    /* for demonstration
    for (auto& v: board) {
        for (auto i: v) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
     */
}

