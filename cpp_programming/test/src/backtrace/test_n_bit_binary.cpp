//
// Created by quinn on 2/16/2025.
//
#include <gtest/gtest.h>

#include "backtrace/n_bit_binary.h"

TEST(NbitBinaryTest, Testcase) {
    BinaryGenerator bg;
    auto result = bg.generatorBinary(3);
    EXPECT_EQ(result.size(), 8);

// for demonstration
/*
    for (auto& s: result) {
        std::cout << s << std::endl;
    }
 */
}
