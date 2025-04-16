#include <iostream>
#include <vector>

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(nullptr);
  
  int n,m; std::cin >> n >> m;
  std::vector<int> tasks(m);
  for(int i = 0;i<m;++i) std::cin >> tasks[i];

  long long time = 0;
  int current = 1; 

  for (int i = 0; i < m; i++) {
      if (tasks[i] >= current) time += tasks[i] - current;  
      else time += n - current + tasks[i];

      current = tasks[i];  
  }

  std::cout << time << '\n';
  
}
