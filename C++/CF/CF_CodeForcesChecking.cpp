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
 
    std::string str = "codeforces";
    std::unordered_map<char, int> map;
    for(const auto& i : str) map[i]++;

    int32_t T;
    std::cin >> T;
    while(T--){
      char x;
      std::cin >> x;
      if(map.find(x) != map.end()) puts("YES");
      else puts("NO");
    }
}
