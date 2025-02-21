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

    while(T--){
      int32_t a,b,c;
      std::cin >> a >> b >> c;
      if(a + b >= 10 || a + c >= 10 || b + c >= 10) puts("YES");
      else puts("NO");
    }
    
}
