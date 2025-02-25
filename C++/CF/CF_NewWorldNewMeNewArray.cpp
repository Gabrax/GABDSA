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

int min_operations(int n, int k, int p) {
    if (k < -n * p || k > n * p) return -1;

    int operations = ceil(abs(k) / (double)p);

    return (operations > n) ? -1 : operations;
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);

    int32_t T;
    std::cin >> T;
    while(T--){
      int32_t n,k,p;
      std::cin >> n >> k >> p;
      std::cout << min_operations(n, k, p) << '\n'; 
    }
}
