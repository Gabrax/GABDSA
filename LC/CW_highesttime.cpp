#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::string MakeTime(std::vector<int>& arr)
{
    std::sort(arr.begin(), arr.end());
    std::string TheZeroHour = "00:00";

    while(std::next_permutation(arr.begin(),arr.end()))
    {
        std::string newTime = std::to_string(arr[0]) + std::to_string(arr[1]) + ":" + std::to_string(arr[2]) + std::to_string(arr[3]);
        if(std::stoi(newTime.substr(0, 2)) <= 23 && std::stoi(newTime.substr(3, 4)) <= 59 && newTime > TheZeroHour)
        {
            TheZeroHour = newTime;
        }
    }
    return TheZeroHour;
}

int main()
{
    int n,k;
    std::vector<int> arr;
    std::cin >> n;
    for(int i = 0; i < n;i++)
    {
        std::cin >> k;
        arr.push_back(k);
    }

    std::cout << MakeTime(arr) << '\n';

    std::cin.get();    
}
