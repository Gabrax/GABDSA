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
    std::vector<int32_t> vec(T);
    for (int32_t i = 0; i < T; i++) std::cin >> vec[i];
    int32_t res = 1, max = 1;
    for(auto i = 0; i < vec.size()-1;i++){
      if (vec[i] <= vec[i + 1]) res++;
      else res = 1;

      max = std::max(max,res);
    }
    std::cout << max;
}
