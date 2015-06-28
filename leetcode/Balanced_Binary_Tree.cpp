//
//  Balanced_Binary_Tree.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/11.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        int val   = GetBalance(root);
        if(val ==-1) return false;
        return true;
    }
    int GetBalance(TreeNode* node)
    {
        if(node == NULL)
            return 0;
        int left  = GetBalance(node->left);
        if(left == -1) return -1;
        int right = GetBalance(node->right);
        if(right == -1) return -1;
        if(left-right>1 || right-left>1)
            return -1;
        return left>right? left+1:right+1;
    }
    
};