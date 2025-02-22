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
    
      std::string str1,str2;
      std::cin >> str1 >> str2;
 
      char s1 = str1[0];
      char s2 = str2[0];
 
      str1[0] = s2; str2[0] = s1;
 
      std::cout << str1 << " " << str2 << '\n';
      
    }
}
