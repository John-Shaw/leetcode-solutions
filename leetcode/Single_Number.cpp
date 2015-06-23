//
//  Single_Number.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/23.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i += 2) {
            if (nums[i] != nums[i+1]) {
                return nums[i];
            }
        }
        return NULL;
    }
};