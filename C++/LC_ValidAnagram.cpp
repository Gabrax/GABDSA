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

bool isAnagram(const std::string& s, const std::string& k) {
    if (s.length() != k.length())
        return false;

    std::unordered_map<char, int> frequency;

    for (char c : s)
        frequency[c]++;

    for (char c : k) {
        frequency[c]--;
        if (frequency[c] < 0)
            return false;
    }

    return true;
}


int main(){

    std::string s,k;
    std::getline(std::cin,s);
    std::getline(std::cin,k);

   
    if (isAnagram(s, k)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

   
std::cin.get();
}
