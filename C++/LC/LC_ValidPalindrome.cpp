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

bool isPalindrome(std::string& str){
    std::string res;
    std::string new_str;

    for (char c : str) {
        if (std::isalnum(c)) { // Check if character is alphanumeric = without spaces and non-alphabetic characters
            res += std::tolower(c);
        }
    }
    for (char c : str) {
        if (std::isalnum(c)) {
            new_str += std::tolower(c);
        }
    }
    std::reverse(res.begin(),res.end());

    return res == new_str; //returns true if strings are the same, otherwise its false
}

int main(){

    std::string str = "0P";
    std::cout << isPalindrome(str);

    return 0;
}
