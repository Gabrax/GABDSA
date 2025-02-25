#include <cctype>
#include <cmath>
#include <cstdint>
#include <cwchar>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>

bool containsSubsequence(const std::string& str, const std::string& word) {
    size_t j = 0;  

    for (char c : str) {
        if (c == word[j]) {
            j++;  
            if (j == word.size()) return true;  
        }
    }
    return false;
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);

    std::string str;
    std::cin >> str;
    
    if (containsSubsequence(str, "hello")) puts("YES\n");
    else puts("NO\n");
}
