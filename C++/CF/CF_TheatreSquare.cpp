#include <cmath>
#include <cstdint>
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

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int64_t n,m,a;
    std::cin >> n >> m >> a;
    std::cout << ((m+a-1)/a)*((n+a-1)/a);

}
