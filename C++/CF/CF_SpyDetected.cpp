#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>
 
 
int Differ(const std::vector<int32_t>& vec)
{
  std::unordered_map<int, int> map;
  for(const auto& i : vec) map[i]++;
 
  int differ = 0;
  for(const auto& i : map){
    if(i.second == 1){
      differ = i.first;
      break;
    } 
  }
 
  for(int32_t i = 0;i < vec.size();i++) if(vec[i] == differ) return i + 1;
 
  return 0;
}
 
int main() {
    std::cin.tie(0)->sync_with_stdio(0);
 
    int32_t T;
    std::cin >> T;
 
    while(T--){
      int N;
      std::cin >> N;
      std::vector<int32_t> vec(N);
      for (int32_t i  = 0; i < N; i++) std::cin >> vec[i];
      std::cout << Differ(vec) << '\n'; 
    }
}
