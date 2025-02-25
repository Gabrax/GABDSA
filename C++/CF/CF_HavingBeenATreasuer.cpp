#include <cctype>
#include <cmath>
#include <cstdint>
#include <cwchar>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);

    int32_t T;
    std::cin >> T;
    while(T--){
      int32_t n;
      std::cin >> n;
      std::string str;
      std::cin >> str;
      int64_t dash = 0, under = 0;
      for(const auto& i : str){
        if(i == '-') dash++;
        else if(i == '_') under++;
      }
      int64_t res = (dash/2) * (dash - dash/2);
      res *= under;
      std::cout << res << '\n';
    }
}
