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
      int32_t x,y,n;
      std::cin >> x >> y >> n;
      if (n - n % x + y <= n) std::cout << n - n % x + y << '\n';
      else  std::cout << n - n % x - (x - y) << '\n';
    }
}
