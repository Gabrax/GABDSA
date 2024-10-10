#include <cmath>
#include <iostream>
#include <string>

int square_digits(int num) {

  std::string res = "";
 for(const auto& i : std::to_string(num)){
    int c2i = i - '0';
    res += std::to_string(c2i * c2i);
 }
 return std::stoi(res);
}

int main(){


std::cout << square_digits(765);

}
