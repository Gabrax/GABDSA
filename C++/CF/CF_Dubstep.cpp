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
    
    size_t pos;
    while ((pos = str.find("WUB")) != std::string::npos) {
        str.erase(pos, 3);
        str.insert(pos," ");
    }
    std::cout << str << '\n';
}
