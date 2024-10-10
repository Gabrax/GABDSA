#include <iostream>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){

  std::cin.tie(0)->sync_with_stdio(0);

  int res = 0;
  for(const auto& i : busStops){
      res += i.first;
      res -= i.second;
  }
  return res;
}

int main(){

  std::vector<std::pair<int,int>> vec = {{10,0},{3,5},{5,8}};


  std::cout << number(vec);
}
