//
//  Sort_List.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/24.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);

//排序单向链表
ListNode *sortList(ListNode* head) {
    if (head == NULL || head->next == NULL)return head;
    // 快慢指针找到中间节点
    ListNode *fast = head, *slow = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    // 断开
    fast = slow;
    slow = slow->next; fast->next = NULL;
    ListNode *l1 = sortList(head); // 前半段排序
    ListNode *l2 = sortList(slow); // 后半段排序
    return mergeTwoLists(l1, l2);
}

// Merge Two Sorted Lists
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode dummy(-1);
    for (ListNode* p = &dummy; l1 != nullptr || l2 != nullptr; p = p->next) {
        int val1 = l1 == nullptr ? INT_MAX : l1->val;
        int val2 = l2 == nullptr ? INT_MAX : l2->val;
        if (val1 <= val2) {
            p->next = l1;
            l1 = l1->next;
        } else {
            p->next = l2;
            l2 = l2->next;
        }
    }
    return dummy.next;

}