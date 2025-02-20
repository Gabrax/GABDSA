#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    int32_t T;
    std::cin >> T;

    while(T--){
      int n;
      std::cin >> n;
      std::vector<int> vec(n);
      for(int i = 0;i < n; i++) std::cin >> vec[i];

      std::sort(vec.begin(),vec.end());

      bool possible = true;
      for(int i = 1;i < vec.size(); i++){
        if(vec[i] - vec[i-1] > 1){
          possible = false;
          break;
        }
      }
      puts(possible ? "YES" : "NO");
    }
}
