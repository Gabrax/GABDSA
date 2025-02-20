#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;

    int32_t a,b,c,d;
    int32_t res = 0;

    std::vector<int32_t> vec;
    while(T--){
      res = 0;
      std::cin >> a >> b >> c >> d;
      if(b > a) res++;
      if(c > a) res++;
      if(d > a) res++;
      std::cout << res << '\n';
    }
}
