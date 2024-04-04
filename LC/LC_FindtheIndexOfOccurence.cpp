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

int strStr(std::string& s, std::string& k) {
    size_t found = s.find(k);

    for (size_t i = 0; i < s.length(); i++)
    {
        if(found != std::string::npos){
            return static_cast<int>(found);
        }
    }
    return -1;
}


int main(){

std::string s,k;
std::getline(std::cin,s);
std::getline(std::cin,k);

std::cout << strStr(s,k) << '\n';




std::cin.get();
}
