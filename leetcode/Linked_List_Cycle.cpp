//
//  Linked_List_Cycle.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/7/2.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast) {
            fast = fast->next;
            slow = slow->next;
            if (fast) {
                fast = fast->next;
            }
            if (fast && fast == slow) {
                return true;
            }
        }
        return false;
    }
};