#include <iostream>
#include <vector>
int main()
{
int t;
std::cin >> t;
std::vector<int> arr;
while(t--){
    int iloscStacji,cel,stacje;
    std::cin >> iloscStacji >> cel;
    int prev = 0; int res = 0;
    for(int i =0;i<iloscStacji;i++)
    {
        std::cin >> stacje;
        res = std::max(res, stacje - prev);
        prev = stacje;
       
                       
    }
    res = std::max(res, 2 * (cel - prev));
    std::cout << res << '\n';
    
}

  

    

std::cin.get();
}
