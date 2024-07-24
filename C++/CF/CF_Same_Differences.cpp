#include <cstddef>
#include <cstdint>
#include <iostream>
#include <map>
#include <vector>

int main(){


  std::cin.tie(0)->sync_with_stdio(0);

  int T;
  std::cin >> T;
  while(T--){
    int n;
    std::cin >> n;
    std::map<int, int> map;
    long long result = 0;
    for(int i = 0;i < n;i++){
      int bruh;
      std::cin >> bruh;
      bruh -= i;
      result += map[bruh];
      map[bruh]++;
    }
    std::cout << result << '\n';
  }
  

}
