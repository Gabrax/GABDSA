#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> fizzBuzz(int n) {

  std::vector<std::string> res;
  for (int i = 1; i <= n;i++){
    if(i % 5 == 0 && i % 3 == 0) res.emplace_back("FizzBuzz");
    else if (i % 3 == 0) res.emplace_back("Fizz");
    else if (i % 5 == 0) res.emplace_back("Buzz");
    else res.emplace_back(std::to_string(i));
  }
  
  return res;
}

int main()
{

  std::vector<std::string> res = fizzBuzz(5);
  for (auto& i : res) std::cout << i << '\n';

}
