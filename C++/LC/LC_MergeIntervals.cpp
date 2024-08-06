#include <iostream>
#include <chrono>

template<typename T>
double measureExecutionTime(T&& func) {
    auto start = std::chrono::high_resolution_clock::now();
    std::forward<T>(func)(); // Call the provided function
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    return elapsed.count();
}

int main(){

  auto executionTime = measureExecutionTime([]() {
    


  });

  std::cout << "Execution time: " << executionTime << " milliseconds" << '\n';
}

