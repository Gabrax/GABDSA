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
 
    int32_t res = 0;
    int32_t a,b,c,d;
    std::cin >> a >> b >> c >> d;
    std::string cals;
    std::cin >> cals;

    for(int32_t i = 0;i < cals.size();i++){
        if((cals[i] - '0' ) == 1) res+=a;
        if((cals[i] - '0' ) == 2) res+=b;
        if((cals[i] - '0' ) == 3) res+=c;
        if((cals[i] - '0' ) == 4) res+=d;
    }
   
    std::cout << res << '\n';
}
