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

bool isPalindrome(int x) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
        
        std::string res = std::to_string(x);
        std::string res2 = std::to_string(x);
        std::reverse(res2.begin(),res2.end());
        if(res == res2){
            return true;
        }
        return false;
}

int main(){

    int x = -121;
    std::cout << isPalindrome(x);
    
    return 0;
}
