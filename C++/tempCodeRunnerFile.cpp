#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t;
  std::cin >> t;
  while (t--) {
    int n,k;
    int count = 0;
    std::cin >> n >> k;
    std::vector<int> arr;
    for (int i = 0; i < n; ++i) {
      int x;
      std::cin >> x;
      arr.push_back(x);
    }
    for(int i = 0; i < arr.size();i++)
    {
        if(arr[i] == k)
        {
            count++;
        }
    }
    if(arr.size() <= 2)puts ("YES");
    else if(count >= 2) puts ("YES");
    else puts("NO");
    
   
  }

    
    std::cin.get();
}
