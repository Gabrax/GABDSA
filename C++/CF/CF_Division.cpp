#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;

    while(T--){
      int n;
      std::cin >> n;
     
      if(n <= 1399) puts("Division 4");
      else if(n >= 1400 && n <= 1599) puts("Division 3");
      else if(n >= 1600 && n <= 1899) puts("Division 2");
      else if(1900 <= n) puts("Division 1");
    }
}
