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
      std::string num_str = "";
      std::cin >> num_str;
      
      if ((num_str[0] - '0') + (num_str[1] - '0') + (num_str[2] - '0') == 
          (num_str[5] - '0') + (num_str[4] - '0') + (num_str[3] - '0')) {
          puts("YES");
      }
      else puts("NO");
    }
}
