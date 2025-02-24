#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    int height = 0;
    int usedCubes = 0;

    while (true) {
        int needed = (height + 1) * (height + 2) / 2; 
        if (usedCubes + needed > n) break; 

        usedCubes += needed;
        height++;
    }

    std::cout << height << '\n';
}
