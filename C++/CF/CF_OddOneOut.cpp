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

    std::vector<int> vec = {};
    while(T--){
      vec = {};
      int a,b,c;
      std::cin >> a >> b >> c;
      vec.insert(vec.end(),{a,b,c});
      std::sort(vec.begin(),vec.end());
      if(vec[0] - vec[1] != 0) std::cout << vec[0] << '\n';
      else if(vec[1] - vec[2] != 0) std::cout << vec[2] << '\n';
    }
    
}
