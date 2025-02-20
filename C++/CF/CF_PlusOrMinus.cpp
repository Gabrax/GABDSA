#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;

    while(T--){
      int a,b,c;
      std::cin >> a >> b >> c;
      if(a + b == c) puts("+");
      else if(a - b == c) puts("-"); 
    }
}
