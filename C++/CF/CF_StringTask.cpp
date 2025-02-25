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


int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);

    std::unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y',
                                       'a', 'e', 'i', 'o', 'u', 'y'};

    std::string str,res;
    std::cin >> str;

    for (char c : str) {
        if (!vowels.count(c)) {  
            res += '.';
            res += std::tolower(c);
        }
    }

    std::cout << res << '\n';
}
