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
#include <numeric>

constexpr int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b); // Recursive Euclidean Algorithm
}

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t a,b;
    std::cin >> a >> b;

    int32_t res = (6 - std::max(a,b) + 1);

    constexpr int denom = 6; 
    int32_t divisor = gcd(res, denom);
    std::cout << (res/divisor) << "/" << (denom/divisor); 
}
