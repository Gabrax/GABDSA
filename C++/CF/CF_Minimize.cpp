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
 
    int32_t T;
    std::cin >> T;
    while (T--) {
        int32_t a, b;
        std::cin >> a >> b;

        if (a == b) {
            std::cout << "0\n";
            continue;  
        }

        for (int32_t c = a; c < b; c++) {
            std::cout << (c - a) + (b - c) << '\n';
            break;  
        }
    }
    
}
