#include <iostream>
#include <string>

int main(){

  std::cin.tie(0)->sync_with_stdio(0);

  int T;
  std::cin >> T;
  std::string str = "codeforces";
  while(T--){
    std::string str1;
    std::cin >> str1;

    int count = 0;
    for(char i = 0;i< str.length();i++){
      if(str1[i] != str[i]) count++;
    }
    std::cout << count << '\n';
  }

}
