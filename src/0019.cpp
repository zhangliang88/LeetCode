#include "LeetCode.hpp"

/*
19. Remove Nth Node From End of List
Medium

Given a linked list, remove the n-th node from the end of list and return its head.
Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
Given n will always be valid.
Follow up:
Could you do this in one pass?

Tags: 
    1. Linked List
    2. Two Pointers

Hint 1:
Maintain two pointers and update one with a delay of n steps.

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
    }
};

TEST_CASE("remove-nth-node-from-end-of-list", "[19][Medium][linked-list][two-pointers]") {
    //TODO
    CHECK(true);
}

