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
        if(st2.size()==0 || val<=getMin()){ // jesli rozmiar st2 rowne zero albo value jest mniejsze badz rowne wartosi na górze stacku, push value do st2
            st2.push(val);
        }
    }
    
    void pop() {
        if(st1.top()==getMin()){ // jesli na gorze stacku st1 jest rowna gorze st2, wyrzuc z stacka st2
            st2.pop();
        }
        st1.pop(); // wyrzuc z stack st1
    }
    
    int top() {
        return st1.top(); // zwroc wartosc na gorze st1
    }
    
    int getMin() {
        return st2.top(); // zwroc wartosc na gorze st2
    }
};


int main(){



    return 0;
}
