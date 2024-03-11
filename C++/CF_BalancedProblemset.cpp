#include <iostream>
#include <numeric>


int main()
{
    

    int n;
    int a,b;
    std::cin >> n;
    for(int i = 0; i < n;i++)
    {
        std::cin >> a >> b;
        int res = std::gcd(a,b);

        std::cout << res << '\n';
    }
    

    std::cin.get();
}
