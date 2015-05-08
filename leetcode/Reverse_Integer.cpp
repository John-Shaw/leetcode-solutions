//
//  Reverse_Integer.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/8.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <climits>
#include <cstdlib>

class Solution {
public:
    int reverse(int x) {
        
        if(x==INT_MAX)
            return 0;
        int num = abs(x);
        int res = 0;
        while(num!=0)
        {
            int max =(INT_MAX-num%10)/10;
            if(res > max)
                return 0;
            res = res*10+num%10;
            num /= 10;
        }  
        return x>0?res:-res;
    }
    
};