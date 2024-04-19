#include <gtest/gtest.h>

#include "string/leetcode387.h"

TEST(Leetcode387Test, Testcase1) {
    std::string s {"leetcode"};
    Solution387 so;
    EXPECT_EQ(so.firstUniqChar(s), 0);
}

TEST(Leetcode387Test, Testcase2) {
    std::string s {"loveleetcode"};
    Solution387 so;
    EXPECT_EQ(so.firstUniqChar(s), 2);
}

TEST(Leetcode387Test, Testcase3) {
    std::string s {"loveleetcodevtcd"};
    Solution387 so;
    EXPECT_EQ(so.firstUniqChar(s), -1);
}