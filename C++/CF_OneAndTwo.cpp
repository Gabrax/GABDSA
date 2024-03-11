#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int res = 0;
        std::vector<int> arr;
        int n;
        std::cin >> n;
        for(int i =0;i <n;i++)
        {
            int x;
            std::cin >> x;
            arr.push_back(x);
            if(arr[i] == 2)
            {
                res++;
            }
        }
        int res2 = 0;
        bool flag = false;
        for(int i =0;i <arr.size()-1;i++)
        {
            if(arr[i] == 2)
            {
                res2++;
            }
            if(res2*2 == res)
            {
                std::cout << i + 1 << '\n';
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            std::cout << -1 << '\n';
        }



    }

    std::cin.get();
}
