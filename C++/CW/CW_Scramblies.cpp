#include <iostream>
#include <string>
#include <algorithm>

bool scramble(std::string& s1, std::string& s2) {
  std::sort(begin(s1), end(s1));
  std::sort(begin(s2), end(s2));
  return std::includes(begin(s1), end(s1), begin(s2), end(s2));
}

int main(){

  std::string s1 = "katas"; std::string s2 = "steak";

  bool res = scramble(s1, s2);

  res ? puts("true") : puts("false");

}
