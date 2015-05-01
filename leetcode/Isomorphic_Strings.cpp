//
//  Isomorphic_Strings.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/30.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        for (int i = 0; i < s.length(); i++) {
            char c1 = s.at(i);
            cout<<c1;
        }
        
        
        return true;
    }
private:
    int hash[26];
};

