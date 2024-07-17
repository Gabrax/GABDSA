#include <iostream>
#include <vector>
#include <numeric>


int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        std::vector<int> arr;
        int n,x;
        
        std::cin >> n;
        for(int i =0;i <n;i++)
        {
            std::cin >> x;
            arr.push_back(x);
        }

        bool flag = false;
        //int res = std::gcd(arr[0],arr[1]);
        for(int i =0;i <n;i++)
        {  
            for(int j = i +1;j <n;j++)
            {
                int res = std::gcd(arr[i],arr[j]);
                if(res <= 2){
                    flag = true;
                    break;
                } 

            }
        }
        if(flag == true)
        {
            puts ("Yes");
        }
        else{
            puts ("No");
        }
        
            //std::cout << "----" << '\n';
            //std::cout << res << '\n';
    }


    std::cin.get();
}
