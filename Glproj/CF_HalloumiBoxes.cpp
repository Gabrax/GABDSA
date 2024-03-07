#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
 int t;
 std::cin >> t;

 while(t--){
    int n,k,c;
    std::cin >> n >> k;
    std::vector<int> arr;
    for(int i = 0; i < n;i++)
    {
        std::cin >> c;
        arr.push_back(c);
    }

    if(std::is_sorted(arr.begin(),arr.end()) || k > 1)
    {
        std::cout << "YES" << '\n';
    }
    else
    {
        std::cout << "NO" << '\n'; 
    }
 }


    std::cin.get();
}
