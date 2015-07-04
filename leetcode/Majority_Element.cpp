//
//  Majority_Element.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/7/4.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> hashmap;
        int major = 0, max_counts = 0, n = (int)nums.size();
        for (int i=0; i < n; i++) {
            hashmap[nums[i]]++;
            if (hashmap[nums[i]] > max_counts) {
                
                max_counts = hashmap[nums[i]];
                major = nums[i];
                if (max_counts > n / 2) break;
                
            }
        }
        return major;
    }
    
    //准备再用vote算法实现一遍，现在太晚了，先睡觉
};