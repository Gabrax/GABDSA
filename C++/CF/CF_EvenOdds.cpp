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

    int64_t n, k;
    std::cin >> n >> k;

    int64_t oddCount = (n + 1) / 2;
    
    if (k <= oddCount) std::cout << 2 * k - 1 << '\n';  
    else std::cout << 2 * (k - oddCount) << '\n';
}
