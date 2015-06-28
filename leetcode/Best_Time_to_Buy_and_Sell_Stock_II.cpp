//
//  Best_Time_to_Buy_and_Sell_Stock_II.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/28.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for (int i = 1; i < prices.size(); i++) {
            int temp = prices[i] - prices[i-1];
            if (temp > 0) {
                max +=temp;
            }
        }
        return max;
    }
};