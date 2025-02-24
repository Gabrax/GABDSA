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
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t T;
    std::cin >> T;

    while (T--) {
        uint32_t dummy;
        std::cin >> dummy;
        std::string str;
        std::cin >> str;
        
        std::unordered_map<int8_t, int32_t> map; 
        int32_t count = 0; 
        for (const auto& ch : str) {
            if (map.find(ch) == map.end()) {
                map[ch] = 1; 
                count += 2; 
            } else {
                map[ch] += 1; 
                count += 1;    
            }
        }

        std::cout << count << "\n";
    }
}
