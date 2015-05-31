//
//  Same_Tree.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/31.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//DFS
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
            return true;
        else if(p == NULL || q == NULL)
            return false;
        if(p->val == q->val)
        {
            bool left = isSameTree(p->left, q->left);
            bool right = isSameTree(p->right,q->right);
            return left&&right;
        }
        return false;
    }
};