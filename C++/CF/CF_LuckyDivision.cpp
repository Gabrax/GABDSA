#include <cctype>
#include <cmath>
#include <cstdint>
#include <cstdlib>
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

    int32_t n;
    std::cin >> n;

    std::vector<int32_t> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for (const auto& i : luckyNumbers) {
        if (n % i == 0) {  
            puts("YES");
            return 0;
        }
    }

    puts("NO");
}
