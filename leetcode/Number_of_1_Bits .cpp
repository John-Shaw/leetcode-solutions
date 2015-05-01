//
//  hammingWeight.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/1.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <iostream>
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int bitCount = 0;
        while (n > 0){
            if(n%2 == 1){
                bitCount++;
            }
            n /= 2;
        }
        return bitCount;
    }
};