#include <cstdint>
#include <iostream>
#include <vector>

int main()
{
  std::cin.tie(0)->sync_with_stdio(0);

  int32_t T;
  std::cin >> T;
  std::vector<int32_t> host;
  std::vector<int32_t> guest;

  int32_t res = 0;
  while(T--)
  {
    int32_t g,h;
    std::cin >> h >> g;
    host.emplace_back(h);
    guest.emplace_back(g);
  }

  for(size_t i = 0; i < host.size();i++){
      for(size_t j = 0; j < guest.size();j++){
      if(host[i] == guest[j]) res++;
    }
  }

  std::cout << res;

}
