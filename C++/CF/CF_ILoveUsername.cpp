#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cstdint>

int main() {
    int T;  
    std::cin >> T;
    
    int score;
    std::cin >> score;  
    
    int best = score, worst = score;
    int amazingCount = 0;
    
    while(T--) { 
        std::cin >> score;
        
        if (score > best) {  
            amazingCount++;
            best = score;
        } 
        else if (score < worst) {  
            amazingCount++;
            worst = score;
        }
    }
    
    std::cout << amazingCount << " ";
}
