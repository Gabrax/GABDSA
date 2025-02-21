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

    int32_t T,N;
    std::cin >> T >> N;

    int32_t res = 0, pass = 5 - N;
    while(T--){
      int32_t x;
      std::cin >> x;
      if(x <= pass) res++;
    }
    std::cout << res / 3 << '\n';
    
}
