#include <iostream>
#include <string>

int getCount(const std::string& inputStr){
  int num_vowels = 0;
  char arr[] = {'a','e','i','o','u'};
  for(auto& i : inputStr){
    for(auto& j : arr){
      if(i == j) num_vowels++;
    }
  }
  return num_vowels;
}

int main(){

  std::string str = "abracadabra";
  std::cout << getCount(str);

}
