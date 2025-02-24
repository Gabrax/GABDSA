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
      std::string x;
      std::cin >> x;
      if((x.size() == 1) || x.size() % 2 != 0) puts("NO");
      else if(x.substr(0,x.length()/2) != x.substr(x.length()/2)) puts("NO");
      else if(x.substr(0,x.length()/2) == x.substr(x.length()/2)) puts("YES");
    }
}
