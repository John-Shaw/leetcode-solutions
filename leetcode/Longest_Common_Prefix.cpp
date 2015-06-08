//
//  Longest_Common_Prefix.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/6/8.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if (strs.size() == 0) {
            return prefix;
        }
        for (int i = 0; i < strs[0].length(); i++) {
            char append = strs[0][i];
            bool isCommon = true;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[0][i] != strs[j][i]) {
                    isCommon = false;
                    break;
                }
            }
            if (isCommon) {
                prefix.append(1,append);
            } else {
                break;
            }
        }
        return prefix;
    }
};