#include <iostream>
#include <vector>

int main(){

  std::cin.tie(0)->sync_with_stdio(0);

  int n;
  std::cin >> n;
  std::vector<int> vec(n+1);
  
  for(int i = 1;i<= n;i++){
    std::cin >> vec[i];
  }

  int res = 1;

  for(int i = 1;i<= n;i++){
      int node = vec[i];
      int dep = 1;
      while(node != -1){
      node = vec[node];
      dep++;
    }
    res = std::max(res,dep);
  }
  std::cout << res << '\n';
}
