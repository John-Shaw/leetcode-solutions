//
//  Path_Sum.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/9.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//递归，满足情况时的path的叶节点，左右无子树，且此时的sum等于value，其他情况递归到下一子树，并将sum－value
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == 0) {
            return false;
        }
        if (root->left == 0 && root->right == 0 && root->val == sum ) {
            return true;
        }
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }

};