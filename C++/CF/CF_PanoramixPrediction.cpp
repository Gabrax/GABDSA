#include <cmath>
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

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int next_prime(int n) {
    int next = n + 1;
    while (!is_prime(next)) {
        next++;
    }
    return next;
}

int main() {

    std::cin.tie(0)->sync_with_stdio(0);
    int n, m;
    std::cin >> n >> m;

    if (next_prime(n) == m) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
