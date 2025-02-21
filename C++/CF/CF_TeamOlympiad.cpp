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
#include <stack>
 
int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;

    std::vector<int> one;
    std::vector<int> two;
    std::vector<int> three;

    for(int32_t i = 0;i < T;i++){
      int32_t x;
      std::cin >> x;
      if(x == 1) one.push_back(i);
      else if(x == 2) two.push_back(i);
      else if(x == 3) three.push_back(i);
    }
    
    int32_t teams = std::min({one.size(),two.size(),three.size()});
    std::cout << teams << '\n';
    for(int32_t i = 0; i < teams;i++){
      std::cout << one[i] + 1 << " " << two[i] + 1 << " " << three[i] + 1 << '\n';
    }
    
}
