//
//  String_to_Integer.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/13.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <string>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        if (str.empty()) {
            return 0;
        }
        long long result = 0;
        bool isPositive = true;
        str.erase(remove(str.begin(),str.end(),' '), str.end());
        
        
        
        if (result > INT_MAX && isPositive) {
            return 0;
        }
        return (int)result;
    }
};