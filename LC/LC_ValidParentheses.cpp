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

bool isValid(std::string s) {
    std::stack<char> stk;
        for(char i : s){
            if( i == '(' || i == '[' || i == '{'){
                stk.push(i);
            }else if( i == ')' || i == ']' || i == '}'){
                if( stk.empty() ||i == ')' && stk.top() != '(' || i == ']' && stk.top() != '[' || i == '}' && stk.top() != '{'){
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
}

int main(){

    std::string s = "()[]{}";
    std::cout << isValid(s);

    return 0;
}
