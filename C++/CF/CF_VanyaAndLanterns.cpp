#include <cstdint>
#include <ios>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t n,l;
    std::cin >> n >> l;
    std::vector<int32_t> vec(n);
    for(int32_t i = 0;i < n;++i) std::cin >> vec[i];

    std::sort(vec.begin(),vec.end());

    double max_gap = 0;
    for (int i = 1; i < n; i++) {
        max_gap = std::max(max_gap, (vec[i] - vec[i - 1]) / 2.0);
    }

    double d = std::max({(double)vec[0], (double)(l - vec[n - 1]), max_gap});

    std::cout << std::fixed << std::setprecision(10) << d << '\n';
}
