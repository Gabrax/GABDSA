#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <chrono>

template<typename T>
double measureExecutionTime(T&& func) {
    auto start = std::chrono::high_resolution_clock::now();
    std::forward<T>(func)(); // Call the provided function
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    return elapsed.count();
}

std::vector<std::string> summaryRanges(std::vector<int>& nums) {

  std::cin.tie(0)->sync_with_stdio(0);

  if(nums.empty()) return {};

  std::vector<std::string> rng;

  int str = nums[0];

  for(int i = 1; i < nums.size();i++){
    if(nums[i] != nums[i-1] + 1){
      if(str == nums[i - 1]) {
        rng.push_back(std::to_string(str));
      } else { 
        rng.push_back(std::to_string(str) + "->" + std::to_string(nums[i-1]));
      }
      str = nums[i];
    }
  }

  if(str == nums.back()) rng.push_back(std::to_string(str));
  else rng.push_back(std::to_string(str) + "->" + std::to_string(nums.back()));

  return rng;
}


int main(){

  
  
  auto executionTime = measureExecutionTime([]() {
    
    std::vector<int> nums = {0,1,2,4,5,7};
    std::vector<std::string> res = summaryRanges(nums);

    for(auto i : res){
      std::cout << i << " " << '\n';
    }

  });

    std::cout << "Execution time: " << executionTime << " milliseconds" << '\n';
}
