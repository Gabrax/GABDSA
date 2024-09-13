#include <cstdint>
#include <iostream>
#include <chrono>
#include <vector>
#include <unordered_set>
#include <functional>

template<typename Func, typename... Args>
void MeasureTime(Func&& func, Args&&... args) {
    auto start = std::chrono::high_resolution_clock::now();

    std::invoke(std::forward<Func>(func), std::forward<Args>(args)...);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Execution Time: " << duration.count() << " ms" << '\n';
}


void printMissingNumbers(const std::vector<int32_t>& vec, const std::vector<int32_t>& numbersToCheck) {
    std::unordered_set<int32_t> vecSet(vec.begin(), vec.end());
    
    for (int num : numbersToCheck) {
        if (vecSet.find(num) == vecSet.end()) {
            std::cout << num << '\n';
        }
    }
}

int main(){

  std::cin.tie(0)->sync_with_stdio(0);

  auto func = []() {
    int32_t a,b;
    std::cin >> a >> b;
    std::vector<int32_t> vec = {a,b};
    std::vector<int32_t> check = {1,2,3};

    printMissingNumbers(vec, check);
  };
  MeasureTime(func);

}
