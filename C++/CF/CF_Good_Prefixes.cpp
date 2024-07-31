#include <iostream>
#include <vector>

int main(){

  std::cin.tie(0)->sync_with_stdio(0);

  int T;
  std::cin >> T;
  while(T--){
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for(int i = 0; i < n;i++){
      std::cin >> vec[i];
    }
      int res = 0, max = 0; long long sum = 0;
    for(int i = 0;i < n;i++){
        sum += vec[i];
        max = std::max(max,vec[i]);
        if(sum - max == max) res++;
    }
    std::cout << res << '\n';
  }
} 
