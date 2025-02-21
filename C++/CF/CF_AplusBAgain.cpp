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
      std::string str;
      std::cin >> str;

      std::cout << (str[0] - '0') + (str[1] - '0') << '\n';
    }
}
