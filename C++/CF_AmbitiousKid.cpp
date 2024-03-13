#include <iostream>
#include <vector>
 
int main()
{
    int t;
    std::cin >> t;
    std::vector<int> arr(t);
    int jezus = 1e12;
    for(int i = 0;i < t;i++)
    {    
        std::cin >> arr[i];
        jezus = std::min(jezus,std::abs(arr[i]));
    }
    
        std::cout << jezus << '\n';
    
    
    std::cin.get();
}
