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

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
  
  std::cin.tie(0)->sync_with_stdio(0);

  std::vector<int> res;

  if(matrix.empty()) return res;

  int rows = matrix.size(); 
  int cols = matrix[0].size();
  int left = 0; 
  int right = cols-1;
  int top = 0;
  int bottom = rows-1;

  while(left <= right && top <= bottom){

    for(int i = left;i <= right;i++){
      res.push_back(matrix[top][i]);
    }
    top++;


    for(int i = top;i <= bottom;i++){
      res.push_back(matrix[i][right]);
    }
    right--;

    if(top <= bottom){
      for(int i = right;i >= left;i--){
        res.push_back(matrix[bottom][i]);
      }
      bottom--;
    }

    if(left <= right){
      for(int i = bottom;i >= top;i--){
        res.push_back(matrix[i][left]);
      }
      left++;
    }
  }
  return res;
}  

int main(){

  auto executionTime = measureExecutionTime([]() {
    
    std::vector<std::vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    std::vector<int> res = spiralOrder(vec);

    for (auto& row : res ){
      std::cout << row << " "; 
      }
  });

  std::cout << '\n';
  std::cout << "Execution time: " << executionTime << " milliseconds" << '\n';
}
