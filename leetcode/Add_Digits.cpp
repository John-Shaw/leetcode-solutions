//
//  Add_Digits.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/8/25.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    //公式归纳 https://en.wikipedia.org/wiki/Digital_root
    int addDigits(int num) {
        return 1 + ((num -1)%9);
    }
};