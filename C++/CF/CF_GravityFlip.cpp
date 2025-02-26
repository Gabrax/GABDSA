#include <cctype>
#include <cmath>
#include <cstdint>
#include <cwchar>
#include <ios>
#include <iostream>
#include <iterator>
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

    int64_t T;
    std::cin >> T;
    std::vector<int32_t> vec(T);
    for(int32_t i = 0;i < T;i++) std::cin >> vec[i];
    std::sort(vec.begin(),vec.end());
    for(const auto& i : vec) std::cout << i << " ";
}
