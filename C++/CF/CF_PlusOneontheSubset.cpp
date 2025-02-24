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
    std::vector<int32_t> vec = {};
    while(T--){
      int32_t n;
      std::cin >> n;
      vec = {};
      vec.resize(n);
      
      for(int32_t i = 0;i < n;i++) std::cin >> vec[i];

      std::cout << *std::max_element(vec.begin(),vec.end()) -
                    *std::min_element(vec.begin(),vec.end()) << '\n';
    }
}
