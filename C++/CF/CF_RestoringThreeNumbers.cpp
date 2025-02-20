#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>

int main() {

  std::cin.tie(0)->sync_with_stdio(0);
  std::array<int,4> arr;
  for(int i = 0;i < 4;i++){
    std::cin >> arr[i];
  }

  std::sort(arr.begin(),arr.end());

  std::cout << arr[3] - arr[0] << " " << arr[3] - arr[1] << " " << arr[3] - arr[2];
        
}
