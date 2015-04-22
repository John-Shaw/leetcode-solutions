//
//  main.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/1.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

#include "Header.h"

int main(int argc, const char * argv[]) {
    
    vector<int> num = {121,2321,342,11,2,3};
    int sum = rob(num);
    cout<<"the most amount is:"<<sum<<endl;
    
    return 0;
}
