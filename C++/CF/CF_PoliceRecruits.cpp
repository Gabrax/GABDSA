#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <tuple>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int n;
    std::cin >> n;

    int availableOfficers = 0;  
    int untreatedCrimes = 0;    

    for (int i = 0; i < n; i++) {
        int event;
        std::cin >> event;

        if (event == -1) {
            if (availableOfficers > 0) availableOfficers--;  
            else untreatedCrimes++;  
        } 
        else availableOfficers += event;  
    }

    std::cout << untreatedCrimes << "\n";  
}

