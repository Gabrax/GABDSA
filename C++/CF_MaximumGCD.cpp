#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int a;   
        std::cin >> a;

        if(a >= 2)
        {
            std::cout << a/2 << '\n';
        }
        
    }

    

    std::cin.get();
}
