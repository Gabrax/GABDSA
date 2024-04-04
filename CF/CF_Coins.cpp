#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        long long n,k;
        std::cin >> n >> k;
        if(k%2 == 0 && !(n%2==0)) puts ("NO");
        else puts ("YES");
    }


    std::cin.get();
}
