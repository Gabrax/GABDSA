#include <iostream>

int countFizzBuzz(int n) {
    return 3 * (n / 15) + std::min(3, n % 15 + 1);
}

int main() {
    int T; 
    std::cin >> T;
    
    while (T--) {
        int n;
        std::cin >> n;
        std::cout << countFizzBuzz(n) << "\n";
    }
}

