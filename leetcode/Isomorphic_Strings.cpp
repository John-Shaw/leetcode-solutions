//
//  Isomorphic_Strings.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/4/30.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>

using namespace std;


//hashmap
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m1;
        map<char, char> m2;
        for(int i=0; i<s.size(); ++i)
        {
            if(m1.find(s[i])==m1.end() && m2.find(t[i])==m2.end())
            {
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
            else if(m1.find(s[i])!=m1.end() && m2.find(t[i])!=m2.end())
            {
                if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i])
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

