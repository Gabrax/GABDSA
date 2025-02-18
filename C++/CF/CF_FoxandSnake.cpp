#include <cstdint>
#include <iostream>


int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t cols, rows;
    std::cin >> cols >> rows;

    for (int32_t i = 0; i < rows; i++) {
        for (int32_t j = 0; j < cols; j++) {
            if (i % 2 == 0) {
                std::cout << '#';  
            } else {
                std::cout << ((i % 4 == 1 && j == rows - 1) || (i % 4 == 3 && j == 0) ? '#' : '.');
            }
        }
        std::cout << '\n';
    }
}
