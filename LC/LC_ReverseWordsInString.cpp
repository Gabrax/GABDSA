#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
    std::string str;
    std::getline(std::cin,str);
    std::vector<std::string> arr;
    std::istringstream iss(str);
    std::string words, res;
    while(iss >> words)
    {
        arr.push_back(words);
    }
    std::reverse(arr.begin(),arr.end());
    for(const auto& i : arr)
    {
        res += i + " ";
    }
    res.pop_back();
    std::cout << res << '\n';
    std::cin.get();
}
