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
      
      if((str[0] == 'b' & str[1] == 'c') 
        || (str[0] == 'c' && str[1] == 'a')) puts("NO");
      else if (str[1] == 'b') puts("YES");
      else puts("YES");
    }
}
