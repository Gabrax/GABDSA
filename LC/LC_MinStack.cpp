#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <cctype>
#include <limits>

class MinStack {
public:
    std::stack<int>st1;
    std::stack<int>st2;
    MinStack() {
        
    }
    
    void push(int val) {
        st1.push(val);
        if(st2.size()==0 || val<=getMin())st2.push(val);
    }
    
    void pop() {
        if(st1.top()==getMin())st2.pop();
        st1.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};


int main(){



    return 0;
}
