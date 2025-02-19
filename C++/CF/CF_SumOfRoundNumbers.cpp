#include <iostream>
#include <vector>
#include <cmath>

void round_numbers(int n) {
    std::vector<int> result;
    int place_value = 1;  // Keeps track of the power of 10

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            result.push_back(digit * place_value);
        }
        n /= 10;
        place_value *= 10;
    }

    // Print the number of terms
    std::cout << result.size() << std::endl;
    // Print the terms
    for (int i = result.size() - 1; i >= 0; --i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    
    std::cin.tie(0)->sync_with_stdio(0);    

    int T;
    std::cin >> T;

    while(T--)
    {
      int n;
      std::cin >> n;
      round_numbers(n);
    }
}
