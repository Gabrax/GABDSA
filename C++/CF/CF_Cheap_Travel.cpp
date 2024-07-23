#include <algorithm>
#include <iostream>

int main(){


  // n - the number of rides Ann has planned
  // m - the number of rides covered by the m ride ticket
  // a - the price of a one ride ticket
  // b - the price of an m ride ticket

  std::cin.tie(0)->sync_with_stdio(0);

  int n,m,a,b;
  std::cin >> n >> m >> a >> b;

  if( m * a <= b){
    std::cout << n * a << '\n';
  }else{
    std::cout << (n/m) * b + std::min((n%m) * a,b) << '\n';
  }


}
