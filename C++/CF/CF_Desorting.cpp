#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
int t;
std::cin >> t;
while(t--){
    int n;
    std::cin >> n;
    int diff = 1e9;
    std::vector<int> arr(n);
    bool sorted = true;
    for(int i = 0;i < n;i++)
    {
        std::cin >> arr[i];
        if(i > 0){
            diff = std::min((arr[i] - arr[i -1]), diff);
            sorted &= arr[i] >= arr[i - 1];
        }
    }
    if(!sorted){
        std::cout << 0 << '\n';
        continue;
    }

    std::cout << diff/2 + 1 << '\n';
   

    
} 


std::cin.get();
}
