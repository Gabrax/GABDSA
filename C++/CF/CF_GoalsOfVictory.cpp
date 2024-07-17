#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int res = 0;
        int teams,score;
        std::cin >> teams;
        for(int i =0; i < teams-1;i++)
        {
            std::cin >> score;
            res += score;
        }
        std::cout << -(res) << '\n';
    }



    std::cin.get();
}
