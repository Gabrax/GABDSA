#include <cstddef>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int findClosestNumber(const std::vector<int>& vec) {

  std::cin.tie(nullptr)->sync_with_stdio(0);

  int closestNumber = vec[0];

    for (int num : vec) {
        if (std::abs(num) < std::abs(closestNumber) || 
            (std::abs(num) == std::abs(closestNumber) && num > closestNumber)) {
            closestNumber = num;
        }
    }

    return closestNumber; 
}

int main(){

  std::vector<int> vec = {-100,-100};
  
  std::cout << findClosestNumber(vec);

}
