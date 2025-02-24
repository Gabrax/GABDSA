#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

bool isSuspicious(const std::string& tasks) {
    std::unordered_set<char> completed;
    for (size_t i = 0; i < tasks.size(); i++) {
        if (i > 0 && tasks[i] != tasks[i - 1]) { 
            if (completed.count(tasks[i])) return true; 
            completed.insert(tasks[i - 1]); 
        }
    }
    return false; 
}

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int32_t T;
    std::cin >> T;
    while(T--){
      int32_t dummy;
      std::cin >> dummy;
      std::string tasks;
      std::cin >> tasks;
      
      if (isSuspicious(tasks)) std::cout << "NO\n"; 
      else std::cout << "YES\n"; 
    }

}
