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

bool repeatedSubstringPattern(std::string& s) {
    int n = s.length();
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {  // Check if i is a divisor of n
            std::string substring = s.substr(0, i);
            std::string concat;
            for (size_t j = 0; j < n/i; j++)
            {
                concat.append(substring);
            }
            
            if (concat == s) {  // Check if the string can be formed by repeating the substring
                return true;
            }
        }
    }
    return false;
}

bool repeatedSubstringPattern2(std::string& s) { //faster way
    const std::string ss = s+s ;
    return ss.substr(1, ss.length() - 2).find(s) != std::string::npos;
  } 


int main(){

    std::string s;
    std::getline(std::cin,s);

    if(repeatedSubstringPattern2(s)){
        puts("true");
    }else{
        puts("false");
    }
    


   
    std::cin.get();
}
