#include <cstdint>
#include <iostream>
#include <random>


int main(){

  std::cout << "choose the interval from 800 to ... " << '\n';
  int32_t number;
  std::cin >> number;

  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_int_distribution<> NUMgenerator(800,number);

  int gimmenumber = static_cast<int>(NUMgenerator(gen));
  std::cout << "ur number GAB: " << gimmenumber;

  std::uniform_int_distribution<> CHARgenerator(97,122);

  char gimmechar = static_cast<char>(CHARgenerator(gen));
  std::cout << " ur char GAB: " << gimmechar;
}
