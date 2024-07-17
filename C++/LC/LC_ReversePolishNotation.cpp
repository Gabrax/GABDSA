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
#include <cmath>
#include <limits>


bool isOperator(const std::string& token) {
    return token == "+" || token == "-" || token == "*" || token == "/" || token == "^";
}

int applyOperator(int operand1,int operand2, const std::string& token){
    if(token == "+")  return operand1 + operand2;
    if(token == "-")  return operand1 - operand2;
    if(token == "*")  return operand1 * operand2;
    if(token == "/")  return operand1 / operand2;
    if(token == "^")  return std::pow(operand1,operand2);
    return 0;
}

int evalRPN(std::vector<std::string>& tokens) {
    std::stack<int> stack;
    
    for(std::string token : tokens) {
        if (isOperator(token)) {
            int operand2 = stack.top();
            stack.pop();
            int operand1 = stack.top();
            stack.pop();
            int result = applyOperator(operand1, operand2, token);
            stack.push(result);
        } else {
            stack.push(std::stoi(token));
        }
    }
    
    return stack.top();
}

int evalRPN2(std::vector<std::string>& tokens) {
        std::stack<int> st;
        int a, b;
        for(std::string c : tokens){
            if(c == "+" || c == "-" || c == "*" || c == "/"){
                a = st.top(); st.pop();
                b = st.top(); st.pop();
            }
            if(c == "+") st.push(b+a);
            else if(c == "-") st.push(b - a);
            else if(c == "*") st.push(b * a);
            else if(c == "/") st.push(b / a);
            else st.push(stoi(c));
        }
        return st.top();
    }

int main(){

    std::vector<std::string> tokens = {"2","1","+","3","*"};

    std::cout << evalRPN(tokens);

    return 0;
}
