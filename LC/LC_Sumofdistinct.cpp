#include <iostream>
#include <map>
#include <vector>
int sumOfUnique(std::vector<int>& nums) {
          
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);

        std::map<int, int> map;

        for(const auto& i : nums){
            map[i]++;
        }
        int res = 0;
        for(const auto& i : map){
            if(i.second < 2){
                res += i.first;
            }
        }
        return res;       
}

int main(){

  std::vector<int> nums = {1,2,3,2};
  std::cout << sumOfUnique(nums);
  return 0;
}
