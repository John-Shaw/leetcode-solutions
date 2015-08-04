//
//  Delete_Node_in_a_Linked_List.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/8/4.
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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};