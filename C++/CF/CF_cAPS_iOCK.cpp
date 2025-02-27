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

    std::string str;
    std::cin >> str;

    bool all_caps = true;
    
    for (size_t i = 1; i < str.size(); ++i) {
        if (islower(str[i])) {
            all_caps = false;
            break;
        }
    }

    if (all_caps) {
        for (char &c : str) {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }

    std::cout << str << '\n';
}
