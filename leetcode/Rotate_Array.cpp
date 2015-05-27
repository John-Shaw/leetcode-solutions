//
//  Rotate_Array.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/26.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = (int)nums.size();
        if(k>size) {
           k = k%size;
        }
        reverse(nums.begin(), nums.begin()+size-k);
        reverse(nums.begin()+size-k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};