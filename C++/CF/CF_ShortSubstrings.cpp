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
      std::string b;
      std::cin >> b;
      
      std::string a = b.substr(0,2);

      for(int32_t i = 3; i < b.size(); i+=2)
      {
        a += b[i];
      }
      std::cout << a << '\n';
    }
}
