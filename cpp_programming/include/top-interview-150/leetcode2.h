//
// Created by quinn on 12/17/2024.
//

#ifndef LEETCODE2_H
#define LEETCODE2_H

#include <cstdint>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        auto left = l1, right = l2;
        auto preLeft = left;
        while (left != nullptr && right != nullptr) {
            left->val += (carry + right->val);
            carry = 0;
            if (left->val > 9) {
                carry = 1;
                left->val %= 10;
            }

            preLeft = left;
            left = left->next;
            right = right->next;
        }

        ListNode* tail {preLeft};
        while (left != nullptr) {
            left->val += carry;
            carry = left->val / 10;
            left->val %= 10;
            tail = left;
            left = left->next;
        }

        if (right != nullptr) {
            preLeft->next = right;
        }

        while (right != nullptr && carry != 0) {
            right->val += carry;
            carry = right->val / 10;
            right->val = right->val % 10;
            tail = right;
            right = right->next;
        }

        if (carry != 0) {
            tail->next = new ListNode(carry);
        }

        return l1;
    }
};

#endif //LEETCODE2_H
