//
//  Binary_Tree_Inorder_Traversal.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/7/4.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        treeTraversal(root, &result);
        return result;
    }

    
    //递归
    void treeTraversal(TreeNode* root,vector<int> *result){
        if (root == NULL) {
            return;
        }
        treeTraversal(root->left, result);
        result->push_back(root->val);
        treeTraversal(root->right, result);
    }
};