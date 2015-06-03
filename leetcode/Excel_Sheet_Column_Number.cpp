//
//  Excel_Sheet_Column_Number.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/2.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <math.h>

using namespace std;
class Solution {
public:
    int titleToNumber(string s) {
        if (s.empty()) {
            return 0;
        }
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            int number = s.at(i) - 'A' + 1;
            sum += number * pow(26,(s.length()-i-1));
        }
        return sum;
    }
};