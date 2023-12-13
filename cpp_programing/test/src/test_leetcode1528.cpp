#include <gtest/gtest.h>

#include <array/leetcode1528.h>

TEST(Leetcode1528Test, case1) {
  std::vector<std::vector<int>> mat { {1,0,0},{0,0,1},{1,0,0} };
  Solution1528 s;
  EXPECT_EQ(s.numSpecial(mat), 1);
}

TEST(Leetcode1528Test, case2) {
  std::vector<std::vector<int>> mat {{1,0,0},{0,1,0},{0,0,1}};
  Solution1528 s;
  EXPECT_EQ(s.numSpecial(mat), 3);
}
