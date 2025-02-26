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

    int64_t a,b,c;
    std::cin >> a >> b >> c;
    
    int32_t res1 = a+b*c;
    int32_t res2 = a*(b+c);
    int32_t res3 = a*b*c;
    int32_t res4 = (a+b)*c;
    int32_t res5 = a+b+c;
    std::cout << std::max({res1,res2,res3,res4,res5});
}
