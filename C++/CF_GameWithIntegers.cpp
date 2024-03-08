#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        if(!(n % 3 == 0))
        {
            std::cout << "First" << '\n';
        }
        else{
            std::cout << "Second" << '\n';
        }

    }


    std::cin.get();
}
