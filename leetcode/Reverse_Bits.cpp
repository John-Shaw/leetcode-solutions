//
//  Reverse_Bits.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/10.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <cstdint>

class Solution {
public:
    char tb[16] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};

    uint32_t reverseBits(uint32_t n) {
        int curr = 0;
        uint32_t ret = 0;
        uint32_t msk = 0xF;
        for(int i = 0; i < 8; i++) {
            ret = ret << 4;
            curr = msk&n;
            ret |= tb[curr];
            n = n >> 4;
        }
        return ret;
    }
};