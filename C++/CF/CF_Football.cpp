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

    int32_t max = 1, res = 1;  
    for (size_t i = 1; i < str.size(); i++) {  
        if (str[i] == str[i - 1]) {
            res++;  
        } else {
            res = 1;  
        }
        max = std::max(max, res);  
    }

    if (max >= 7) {
        std::puts("YES");
    } else {
        std::puts("NO");
    }
}
