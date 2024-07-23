#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_map>
int main(){

  uint32_t T;
  std::cin >> T;
  std::unordered_map<std::string, uint32_t> map;
  for (auto i = 0; i < T; i++) {
        std::string key;
        std::cin >> key;

        if (map.find(key) == map.end()) {
            map[key] = 1;
            std::cout << "OK\n";
        } else {
            std::string newKey = key + std::to_string(map[key]);
            map[key]++;
            std::cout << newKey << '\n';
      }
    } 
}
