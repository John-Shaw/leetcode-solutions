//
//  Happy_Number.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/29.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <cstring>

int hash[1000];

int getSum(int n){
    int sum=0;
    while(n!=0)
    {
        sum=sum+(n%10)*(n%10);
        n=n/10;
    }
    return sum;
}

bool isHappy(int n) {
    memset(hash,0,sizeof(hash));
    
    int tempNum = getSum(n);
    
    while (hash[tempNum] == 0) {
        if (tempNum == 1) {
            return true;
        }
        hash[tempNum] = 1;
        tempNum = getSum(tempNum);
        
    }
    
    return false;
}


