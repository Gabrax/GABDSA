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

    int32_t S, N;
    std::cin >> S >> N;

    std::vector<std::pair<int32_t, int32_t>> dragons(N);

    for (int i = 0; i < N; i++) {
        std::cin >> dragons[i].first >> dragons[i].second;
    }

    std::sort(dragons.begin(), dragons.end());

    for (const auto& [d_strength, bonus] : dragons) {
        if (S > d_strength) {
            S += bonus;  
        } else {
            std::cout << "NO\n";
            return 0;
        }
    }

    std::cout << "YES\n";
}
