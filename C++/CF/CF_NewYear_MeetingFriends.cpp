#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <tuple>

int main() {
    
    std::cin.tie(0)->sync_with_stdio(0);    

    int32_t a,b,c;
    std::cin >> a >> b >> c;

    /*std::tuple<int32_t,int32_t,int32_t> tuple = {a,b,c};*/
    /*std::cout << std::max({std::get<0>(tuple),std::get<1>(tuple),std::get<2>(tuple)}) */
    /*              - std::min({std::get<0>(tuple),std::get<1>(tuple),std::get<2>(tuple)});*/

    std::vector<int> vec = {a,b,c};
    std::cout << *std::max_element(vec.begin(),vec.end()) - *std::min_element(vec.begin(),vec.end());
}
