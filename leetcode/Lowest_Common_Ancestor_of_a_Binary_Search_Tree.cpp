
//  Lowest_Common_Ancestor_of_a_Binary_Search_Tree.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/8/25.
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if ((root->val > p->val) && (root->val > q->val)) {
            return lowestCommonAncestor(root->left, p, q);
        } else if((root->val < p->val) && (root->val < q->val)){
            return lowestCommonAncestor(root->right, p, q);
        } else {
            return root;
        }
        return 0;
    }
};