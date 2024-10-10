#include <iostream>
#include <unordered_map>
#include <vector>
int findOdd(const std::vector<int>& numbers){

  std::cin.tie(0)->sync_with_stdio(0);

  std::unordered_map<int, int> map;
  for(auto& i : numbers){
    map[i]++;
  }
  for(auto& i : map){
    if(i.second % 2 != 0) return i.first;
  }

  return 0;
}

int main(){

  std::vector<int> numbers = {20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5};

  std::cout << findOdd(numbers);

}
