#include <cstdlib>
#include <iostream>

int main(){

  std::cin.tie(0)->sync_with_stdio(0);

  int T;
  std::cin >> T;
  while(T--){
    int a,b;
    std::cin >> a >> b;
    int res = std::abs(a-b);
    std::cout << (res+9)/10 << '\n';
  }

}
