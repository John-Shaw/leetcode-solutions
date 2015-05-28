//
//  Roman_to_Integer.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/28.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int result=0;
        for(int i =0; i< s.size(); i++)
        {
            if(i>0&& c2n(s[i]) > c2n(s[i-1]))
            {
                result +=(c2n(s[i]) - 2*c2n(s[i-1]));
            }
            else
            {
                result += c2n(s[i]);
            }
        }
        return result;
    }
    inline int c2n(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};