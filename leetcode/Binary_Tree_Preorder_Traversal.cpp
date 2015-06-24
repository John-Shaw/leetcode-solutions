//
//  Binary_Tree_Preorder_Traversal.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/24.
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        treeTraversal(root, &result);
        return result;
    }
    
    //递归
    void treeTraversal(TreeNode* root,vector<int> *result){
        if (root == NULL) {
            return;
        }
        result->push_back(root->val);
        treeTraversal(root->left, result);
        treeTraversal(root->right, result);
    }
};