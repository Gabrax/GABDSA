#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>
 
int main() {
    std::cin.tie(0)->sync_with_stdio(0);
 
    std::string str;
    std::cin >> str;
 
    std::string res = "";
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == '.') {
            res += '0';
        } else if (i + 1 < str.size() && str[i] == '-' && str[i + 1] == '.') {
            res += '1';
            i++; 
        } else if (i + 1 < str.size() && str[i] == '-' && str[i + 1] == '-') {
            res += '2';
            i++; 
        }
    }
    std::cout << res;
}
