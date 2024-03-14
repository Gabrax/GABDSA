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
    std::vector<long long> arr(n);
    for(int i = 0;i < n;i++)
    {
        std::cin >> arr[i];
    }
    int count = 0;
    if(std::is_sorted(arr.begin(),arr.end()) != true)
    {
        std::cout << 0 << '\n';
    }else{
        for(int i = 0;i < arr.size();i++)
        {
            
                arr[arr.size()-2] += 1;
                arr[arr.size()-1] -= 1;
                count++;
                if(std::is_sorted(arr.begin(),arr.end()) != true)
                {
                    std::cout << count << '\n';
                    break;
                }
        }    
    }

    
} 


std::cin.get();
}
