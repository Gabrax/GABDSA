#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>


int main(){
  
  std::cin.tie(0)->sync_with_stdio(0);

  int T;
  std::cin >> T;
  while(T--){
    int n;
    std::cin >> n;

 
    std::string str;
    std::cin >> str;

    std::sort(str.begin(),str.end());
    if(str == "Timru") puts("YES");
    else puts("NO");
    
  }

}
