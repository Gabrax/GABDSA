#include <iostream>

int findKthNumber(int k) {
    int count = 0, num = 1;

    while (true) {
        if (num % 3 != 0 && num % 10 != 3) { 
            count++;
            if (count == k) return num; 
        }
        num++;
    }
}

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int t;
    std::cin >> t;

    while (t--) {
        int k;
        std::cin >> k;
        std::cout << findKthNumber(k) << '\n';
    }
}
