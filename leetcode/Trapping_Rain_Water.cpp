//
//  Trapping_Rain_Water.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/3.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = (int)height.size();
        int *max_left = new int[n]();
        int *max_right = new int[n]();
        for (int i = 1; i < n; i++) {
            max_left[i] = max(max_left[i - 1], height[i - 1]);
            max_right[n - 1 - i] = max(max_right[n - i], height[n - i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int h = min(max_left[i], max_right[i]);
            if (h > height[i]) {
                sum += h - height[i];
            }
        }
        delete[] max_left;
        delete[] max_right;
        return sum;
    }
};
