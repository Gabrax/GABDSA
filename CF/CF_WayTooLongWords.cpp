#include <iostream>
#include <string>


int main()
{
    int n;
    std::cin >> n;
    std::string k;

    for(int i = 0; i < n;i++)
    {
        std::cin >> k;

        if(k.length() <= 10)
        {
            std::cout << k << '\n';
        }
        else if(k.length() > 10)
        {
            std::cout << k[0] << k.length() - 2 << k.back() << '\n';
        }
    }


 std::cin.get();
}