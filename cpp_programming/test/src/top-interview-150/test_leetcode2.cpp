//
// Created by quinn on 12/17/2024.
//

#include <vector>
#include <gtest/gtest.h>

#include <top-interview-150/leetcode2.h>

namespace {

ListNode* createList(const std::vector<int>& list) {
    if (list.empty()) {
        return nullptr;
    }

    auto head = new ListNode(list[0]);
    auto tail = head;
    for (auto i = 1; i < list.size(); i++) {
        tail->next = new ListNode(list[i]);
        tail = tail->next;
    }

    return head;
}

}

TEST(Leetcode2Test, LongLeftTest) {
    std::vector<int> v1 {9, 9, 9, 9, 9, 9, 9};
    auto l1 = createList(v1);
    std::vector<int> v2 {9, 9, 9, 9};
    auto l2 = createList(v2);

    Solution2 so;
    auto ret = so.addTwoNumbers(l1, l2);
    EXPECT_TRUE(ret != nullptr);
    EXPECT_EQ(ret->val, 8);
    EXPECT_EQ(ret->next->val, 9);
    EXPECT_EQ(ret->next->next->val, 9);
    EXPECT_EQ(ret->next->next->next->val, 9);
    EXPECT_EQ(ret->next->next->next->next->val, 0);
    EXPECT_EQ(ret->next->next->next->next->next->val, 0);
    EXPECT_EQ(ret->next->next->next->next->next->next->val, 0);
    EXPECT_EQ(ret->next->next->next->next->next->next->next->val, 1);
}

TEST(Leetcode2Test, NormalTest) {
    std::vector<int> v1 {2,4,3};
    auto l1 = createList(v1);
    std::vector<int> v2 {5,6,4};
    auto l2 = createList(v2);

    Solution2 so;
    auto ret = so.addTwoNumbers(l1, l2);
    EXPECT_TRUE(ret != nullptr);
    EXPECT_EQ(ret->val, 7);
    EXPECT_EQ(ret->next->val, 0);
    EXPECT_EQ(ret->next->next->val, 8);
}

TEST(Leetcode2Test, LongRightTest) {
    std::vector<int> v1 {2,4,9};
    auto l1 = createList(v1);
    std::vector<int> v2 {5,6,4,9};
    auto l2 = createList(v2);

    Solution2 so;
    auto ret = so.addTwoNumbers(l1, l2);
    EXPECT_TRUE(ret != nullptr);
    EXPECT_EQ(ret->val, 7);
    EXPECT_EQ(ret->next->val, 0);
    EXPECT_EQ(ret->next->next->val, 4);
    EXPECT_EQ(ret->next->next->next->val, 0);
    EXPECT_EQ(ret->next->next->next->next->val, 1);
}

TEST(Leetcode2Test, SingleNodeTest) {
    std::vector<int> v1 {5};
    auto l1 = createList(v1);
    std::vector<int> v2 {5};
    auto l2 = createList(v2);

    Solution2 so;
    auto ret = so.addTwoNumbers(l1, l2);
    EXPECT_TRUE(ret != nullptr);
    EXPECT_EQ(ret->val, 0);
    EXPECT_EQ(ret->next->val, 1);
}

