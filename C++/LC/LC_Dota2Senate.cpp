#include <cstdint>
#include <iostream>
#include <queue>
#include <string>
#include <chrono>

template<typename T>
void RunCode(T&& codeblock) {
    auto start = std::chrono::high_resolution_clock::now();
    
    if constexpr (std::is_void_v<decltype(codeblock())>) {
        codeblock();
    } else {
        auto result = codeblock();
        std::cout << result << '\n';
        std::cout << '\n';
    }
    
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Execution Time: " << duration.count() << " ms" << '\n';
}

std::string predictPartyVictory(const std::string& senate) {
  
  std::cin.tie(0)->sync_with_stdio(0);

  std::queue<int> rad,dir;

  int32_t len = senate.length();

  for(int i = 0; i < senate.length();i++){
    if(senate[i] == 'R') rad.push(i);
    else dir.push(i);
  }

  while(!rad.empty() && !dir.empty()){
      if(rad.front() < dir.front()) rad.push(len++);
      else dir.push(len++);
    rad.pop(), dir.pop();
  }


  return dir.empty() ? "Radiant" : "Dire"; 
}


int main(){

  std::string senate = "RD";

  RunCode([&]() -> std::string {
        return predictPartyVictory(senate);
  });
  
}
