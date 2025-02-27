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

    int32_t T;
    std::cin >> T;
   
    std::vector<int> count(5, 0); 
    
    for (int i = 0; i < T; ++i) {
        int group_size;
        std::cin >> group_size;
        count[group_size]++;
    }

    int taxis = count[4];  

    int pairs_3_1 = std::min(count[3], count[1]);
    taxis += pairs_3_1;
    count[3] -= pairs_3_1;
    count[1] -= pairs_3_1;

    taxis += count[2] / 2;
    count[2] %= 2; 

    if (count[2] > 0) {
        taxis++;
        count[1] = std::max(0, count[1] - 2);
    }

    
    taxis += (count[1] + 3) / 4; 

    taxis += count[3];

    std::cout << taxis << '\n';
}
