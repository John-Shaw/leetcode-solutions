//
//  House_Robber.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/1.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <vector>
using namespace std;

//DP问题
//公式dp[i] = max{dp[i-2]+num[i],  dp[i-1]}
int rob(vector<int> &num) {
    if(num.size() <= 1) return num.empty()? 0 : num[0];
    
    vector<int> dp = {num[0],max(num[0], num[1])};
    
    for (int i=2; i < num.size() ; i++) {
        dp.push_back(max(num[i]+dp[i-2], dp[i-1]));
    }
    
    return dp.back();
}