#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t T;
    std::cin >> T;

    while(T--){
      int32_t n;
      std::cin >> n;
      int32_t c1 = n / 3; 
      int32_t c2 = c1;
      if (n % 3 == 1) c1++;
      else if (n % 3 == 2) c2++;
      std::cout << c1 << " " << c2 << '\n';
    }

}
