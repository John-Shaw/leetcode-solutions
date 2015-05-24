//
//  Merge_sorted_array.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/24.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m+n);
        int index1 = m - 1;
        int index2 = n - 1;
        int i = m + n - 1;
        for (; index1>=0 && index2 >= 0; i--) {
            if (nums1[index1] >= nums2[index2]) {
                nums1[i] = nums1[index1];
                index1--;
            }
            else{
                nums1[i] = nums2[index2];
                index2--;
            }
        }
        
        while (index2 >= 0) {
            nums1[i] = nums2[index2];
            index2--;
            i--;
        }
    }
};