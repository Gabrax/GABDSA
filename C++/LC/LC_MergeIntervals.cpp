#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

template<typename T>
double measureExecutionTime(T&& func) {
    auto start = std::chrono::high_resolution_clock::now();
    std::forward<T>(func)(); // Call the provided function
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    return elapsed.count();
}

std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
 
  std::cin.tie(0)->sync_with_stdio(0);

  sort(intervals.begin(), intervals.end());
  std::vector<std::vector<int>> res;
    for (auto& i : intervals) {
      if (res.empty() || res.back()[1] < i[0]) res.push_back(i);
      else res.back()[1] = std::max(res.back()[1], i[1]);
    }
  return res;
}
  

int main(){

  auto executionTime = measureExecutionTime([]() {
    
    std::vector<std::vector<int>> vec = {{1,3},{2,6},{8,10},{15,18}};
    std::vector<std::vector<int>> res = merge(vec);

    for (auto& row : res ){
      std::cout << row[1] << '\n'; 
      }
  });

  std::cout << "Execution time: " << executionTime << " milliseconds" << '\n';
}

