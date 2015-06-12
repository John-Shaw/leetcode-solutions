//
//  Invert_Binary_Tree.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/12.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <queue>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    //recursion
    TreeNode* invertTree(TreeNode* root) {
        if(root == 0){
            return 0;
        }
        TreeNode *result = new TreeNode(root->val);
        result->left = invertTree(root->right);
        result->right = invertTree(root->left);
        return result;
    }
    
    //non-recursion
    TreeNode* invertTreeNonRecursion(TreeNode* root) {
        if(root == 0){
            return 0;
        }
        queue<TreeNode *> queue;
        queue.push(root);
        while(!queue.empty()){
            TreeNode *current = queue.front();
            if(current->left !=0 || current->right!=0){
                TreeNode *tmp = current->left;
                current->left = current->right;
                current->right = tmp;
            }
            if(current->left){
                queue.push(current->left);
            }
            if(current->right){
                queue.push(current->right);
            }
            queue.pop();
        }
        return root;
    }
};