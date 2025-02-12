#include <iostream>
#include <vector>
#include <algorithm>

int carFleet(int target, const std::vector<int>& position, const std::vector<int>& speed) {
    std::vector<std::pair<int,int>> vec;
    for (size_t i = 0;i < position.size();i++) 
         vec.emplace_back(position[i],speed[i]);
    std::sort(vec.rbegin(),vec.rend());

    std::vector<double> bruh;
    for (const auto& i : vec){
        bruh.emplace_back((double) (target - i.first)/i.second);
        
        if(bruh.size() >= 2 && bruh.back() <= bruh[bruh.size()-2])
            bruh.pop_back();
    }
  return bruh.size();
}

int main()
{

  std::cout << carFleet(12,{10,8,0,5,3},{2,4,1,1,3});

}
