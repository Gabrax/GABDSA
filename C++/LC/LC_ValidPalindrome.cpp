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

bool isPalindrome(std::string& s)
{    
    std::string str = "";
    for (const auto& i : s) if (std::isalnum(i)) str += std::tolower(i);

    std::string res = str;

    std::reverse(res.begin(), res.end());

    return str == res;
}

int main(){

    std::string str = "0P";
    std::cout << isPalindrome(str);

    return 0;
}
