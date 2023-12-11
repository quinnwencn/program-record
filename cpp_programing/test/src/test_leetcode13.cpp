#include <gtest/gtest.h>
#include <string>

#include <top-interview-150/leetcode13.h>

TEST(Leetcode13, case1) {
    std::string roman {"III"};
    Solution13 s;
    EXPECT_EQ(s.romanToInt(roman), 3);
}

TEST(Leetcode13, case2) {
    std::string roman {"LVIII"};
    Solution13 s;
    EXPECT_EQ(s.romanToInt(roman), 58);
}

TEST(Leetcode13, case3) {
    std::string roman {"MCMXCIV"};
    Solution13 s;
    EXPECT_EQ(s.romanToInt(roman), 1994);
}
