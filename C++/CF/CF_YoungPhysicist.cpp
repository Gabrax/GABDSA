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
    int32_t res_X = 0,res_Y = 0,res_Z = 0;
    while(T--){
      int32_t x,y,z;
      std::cin >> x >> y >> z;
      res_X += x;
      res_Y += y;
      res_Z += z;
    }
    if(res_X == 0 && res_Y == 0 && res_Z == 0) puts("YES");
    else puts("NO");
}
