//
//  Remove_Element.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/17.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = 0;
        for (; i < nums.size(); i++) {
            if (nums[i] == val) {
                continue;
            }
            nums[j] = nums[i];
            j++;
        }
        return j;
    }
};