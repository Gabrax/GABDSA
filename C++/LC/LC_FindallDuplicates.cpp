#include <algorithm>
#include <ios>
#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> findDuplicates(const std::vector<int>& nums){
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::unordered_map<int,int> map;

  for(const auto& i : nums){
    map[i]++;
  }
  std::vector<int> res;
  for(const auto& i : map){
    if(i.second >= 2){
      res.push_back(i.first);
    }
  }


  return res;
}

int main(){

  std::vector<int> arr = {4,3,2,7,8,2,3,1};
  //int k = 2;
  std::vector<int> res = findDuplicates(arr);
  
  for(const auto& i : res){
    std::cout << i << '\n';
  }


  return 0;
}
