#include <iostream>

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(nullptr);
  
  int T; std::cin >> T;
  while(T--)
  {
      int n; std::cin >> n;
      int count = 0;
      for(int i=0;i<n;++i)
      {
          int x; std::cin >> x;
          if(x %2 != 0) count++;
      }
      if (count % 2 == 0) puts("YES");
      else puts("NO");
  }
}
