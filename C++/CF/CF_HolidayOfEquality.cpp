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
    std::vector<int32_t> vec(T);
    for(int32_t i = 0; i < T;i++) std::cin >> vec[i];
    std::sort(vec.begin(),vec.end());
    int32_t res = 0;
    for(int32_t i = 0;i < vec.size() - 1;i++){
        res += vec.back() - vec[i];
    }
    std::cout << res;
}
