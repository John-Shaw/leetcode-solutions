//
//  Contains_Duplicate.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/21.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> unique;
        for (int i = 0; i < nums.size(); i++) {
            if (unique.find(nums[i]) != unique.end()) {
                return true;
            } else {
                unique.insert(nums[i]);
            }
        }
        return false;
    }
};