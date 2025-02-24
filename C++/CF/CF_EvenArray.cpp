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

    while(T--){
      int32_t a = 0, b = 0;
      int32_t N;
      std::cin >> N;
      for(int32_t i = 0; i < N;i++) {
        int32_t x;
        std::cin >> x;
        if(i % 2 != x % 2){
          if(i % 2 == 0) a++;
          else b++;
        } 
      }

      if( a != b) std::cout << -1 << '\n';
      else std::cout << a << '\n';
    }
}
