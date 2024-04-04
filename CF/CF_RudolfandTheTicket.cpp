#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    while(t--){
         int res = 0;
         int n,m,k;
         std::cin >> n >> m >> k;
         std::vector<int> arr(n);
         for(int i =0;i < n;i++)
         {
            std::cin >> arr[i];
         }

        int o;
         for(int i = 0;i < m;i++)
         {
            std::cin >> o;
            for(int j = 0;j < n;j++)
            {
                if((o + arr[j]) <= k)
                {
                    res++;
                }
            }
         }
         std::cout << res << '\n';

    }


    std::cin.get();
}
