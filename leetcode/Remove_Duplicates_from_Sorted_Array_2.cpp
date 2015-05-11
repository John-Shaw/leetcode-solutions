//
//  Remove_Duplicates_from_Sorted_Array_2.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/11.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() <= 2) {
            return (int)nums.size();
        }
        int index = 2;
        for (int i = 2; i < nums.size(); i++) {
            if (nums[index - 2] != nums[i]) {
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};