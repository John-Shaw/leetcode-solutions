//
//  Min_Stack.cpp
//  leetcode
//
//  Created by 邵建勇 on 15/5/12.
//  Copyright (c) 2015年 John Shaw. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class MinStack {
public:
    void push(int x) {
        if (minimumStack.size() == 0 || x<= minimumStack.back()) {
            minimumStack.push_back(x);
        }
        stack.push_back(x);
    }
    
    void pop() {
        if (stack.back() <= minimumStack.back()) {
            minimumStack.pop_back();
        }
        stack.pop_back();
    }
    
    int top() {
        if (stack.size() <= 0) {
            return 0;
        }
        int top = stack.at(stack.size()-1);
        return top;
    }
    
    int getMin() {
        
        return minimumStack.back();
    }
private:
    
    
    vector<int> stack;
    vector<int> minimumStack;
    
    
};