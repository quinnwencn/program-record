#include <gtest/gtest.h>

#include <top-interview-150/leetcode58.h>

TEST(Leetcode58Test, case1) {
    std::string str {"Hello World"};
    Solution58 s;
    EXPECT_EQ(s.lengthOfLastWord(str), 5);
}

TEST(Leetcode58Test, case2) {
    std::string str {"   fly me   to   the moon  "};
    Solution58 s;
    EXPECT_EQ(s.lengthOfLastWord(str), 4);
}

TEST(Leetcode58Test, case3) {
    std::string str {"luffy is still joyboy"};
    Solution58 s;
    EXPECT_EQ(s.lengthOfLastWord(str), 6);
}

TEST(Leetcode58Test, case4) {
    std::string str {"luffy"};
    Solution58 s;
    EXPECT_EQ(s.lengthOfLastWord(str), 5);
}
