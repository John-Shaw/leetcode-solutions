//
//  Maximum_Depth_of_Binary_Tree.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/29.
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
    int maxDepth(TreeNode* root) {
        if (0 == root) {
            return 0;
        }
        
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return left>right?left+1:right+1;
    }
};