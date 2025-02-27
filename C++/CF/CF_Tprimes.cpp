#include <cstdint>
#include <ios>
#include <iostream>
#include <cmath>
#include <vector>

std::vector<bool> sieveOfEratosthenes(int32_t n) {
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; 

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;  
            }
        }
    }
    return isPrime;
}

bool hasThreeDistinctDivisors(int64_t n, const std::vector<bool>& isPrime) {
    int64_t root = sqrt(n);  

    return root * root == n && isPrime[root];
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t T;
    std::cin >> T;
    std::vector<bool> primes = sieveOfEratosthenes(1000000);
    while(T--){
      int64_t n;
      std::cin >> n;
      hasThreeDistinctDivisors(n, primes) ? puts("YES") : puts("NO");
    }
}
