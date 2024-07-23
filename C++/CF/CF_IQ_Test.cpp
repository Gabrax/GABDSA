#include <cstddef>
#include <cstdint>
#include <iostream>
#include <vector>

uint16_t findDifferingNumber(const std::vector<uint16_t>& numbers) {
    int evenCount = 0;
    int oddCount = 0;
    int evenNumber = 0;
    int oddNumber = 0;

    
    for (int i = 0; i < numbers.size();i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenNumber = i + 1;
        } else {
            oddCount++;
            oddNumber = i + 1;
        }
    }

    
    if (evenCount == 1) {
        return evenNumber;
    } else if (oddCount == 1) {
        return oddNumber;
    } else {
        throw std::runtime_error("bruh");
    }
}

int main(){

  std::cin.tie(0)->sync_with_stdio(0);

  uint32_t T;
  std::cin >> T;
  std::vector<uint16_t> vec(T);
  for(uint16_t i = 0; i < T;i++){
    std::cin >> vec[i];
  }
  
  std::cout << findDifferingNumber(vec);
}
