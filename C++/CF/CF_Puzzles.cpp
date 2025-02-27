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

     int32_t n, m;
    std::cin >> n >> m;
    
    std::vector<int32_t> vec(m);
    for(int32_t i = 0; i < m; i++) std::cin >> vec[i];
    
    std::sort(vec.begin(), vec.end());
    
    int32_t min_diff = INT32_MAX; 
    
    for (int32_t i = 0; i <= m - n; i++) {
        int32_t diff = vec[i + n - 1] - vec[i];
        min_diff = std::min(min_diff, diff);
    }
    
    std::cout << min_diff << std::endl; 
}
