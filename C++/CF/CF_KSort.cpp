#include <iostream>
#include <vector>
#include <algorithm>
int main(){

  std::cin.tie(0)->sync_with_stdio(0);
  int T;
  std::cin >> T;
  while(T--){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int i = 0;i < n;i++){
      std::cin >> a[i];
    }
    long long f = 0, m = 0, k = 0;
    for(int i = 0;i<n;i++){
      f = std::max(f,static_cast<long long>(a[i]));
      long long d = f - a[i];
      m += d;
      k = std::max(k,d);
    }
    std::cout << m + k << '\n';
  }

}
