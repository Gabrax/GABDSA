#include <cctype>
#include <cmath>
#include <cstdint>
#include <cwchar>
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

    int32_t T;
    std::cin >> T;
    std::vector<int> coins(T);
    int32_t totalSum = 0;

    for (int32_t i = 0; i < T; i++) {
        std::cin >> coins[i];
        totalSum += coins[i];
    }

    sort(coins.rbegin(), coins.rend());

    int mySum = 0, count = 0;
    
    for (int i = 0; i < T; i++) {
        mySum += coins[i];
        count++;
        if (mySum > totalSum - mySum) break;  
    }

    std::cout << count << '\n';  
}
