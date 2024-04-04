#include <iostream>
#include <map>



int main()
{
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::map<int ,int> occ;
    for (int i = 0; i < n; ++i) {
      int x;
      std::cin >> x;
      occ[x]++;
    }
    if (occ.size() >= 3) puts("No");
    else {
      if (std::abs(occ.begin()->second - occ.rbegin()->second) <= 1) {
        puts("Yes");
      } else {
        puts("No");
      }
    }
   
  }

    
    std::cin.get();
}
