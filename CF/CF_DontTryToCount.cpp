#include <iostream>
#include <string>


int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {   int a,b;
        std::cin >> a >> b;
        std::string shortstring,goal;
        std::cin >> shortstring >> goal;

        int f = 0;
        int res = 0;
        for(int i =0; i < 6; i++)
        {
            if(shortstring.find(goal) != std::string::npos)
            {
                f = 1;
                break;
            }
            res++;
            shortstring += shortstring;
        }
        if(f == 1)
        {
         std::cout << res << '\n';
        }
        else{
            std::cout << -1 << '\n';
        }
        
        
    }

    

    std::cin.get();
}
