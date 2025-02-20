#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;
    
    std::vector<int32_t> arr(T);
    for (size_t i = 0; i < T; i++) {
        std::cin >> arr[i];
    }

    int left = 0, right = T - 1;
    int32_t p1 = 0, p2 = 0;
    bool turn = true;  

    while (left <= right) {
        if (arr[left] > arr[right]) {
            if (turn) p1 += arr[left];
            else p2 += arr[left];
            left++;
        } else {
            if (turn) p1 += arr[right];
            else p2 += arr[right];
            right--;
        }
        turn = !turn;  
    }

    std::cout << p1 << " " << p2;
}
