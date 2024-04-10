#include <iostream>
#include <stack>
#include <vector>


std::vector<int> dailyTemperatures(std::vector<int>& temperatures){
  
  std::stack<std::pair<int,int>> stk;
  std::vector<int> res(temperatures.size());


  for(int i = 0; i < temperatures.size();i++){

      int curr = i; 

      while(!stk.empty() && stk.top().second < temperatures[i]){
      int prevDay = stk.top().first;
      int prevTemp = stk.top().second;
      stk.pop();
          res[prevDay] = curr - prevDay;
    }
    stk.push({curr,temperatures[i]});
  }  


  return res;
}

int main(){


  std::vector<int> temperatures = {73,74,75,71,69,72,76,73};
  std::vector<int> res = dailyTemperatures(temperatures);
  for(const auto& i : res){
    std::cout << i << " ";
  }

  return 0;
}
