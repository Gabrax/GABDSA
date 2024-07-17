
#include <iostream>
#include <vector>


std::vector<int> buildArray(const std::vector<int>& nums) {

        std::ios::sync_with_stdio(0);
        std::cin.tie(0);

        std::vector<int> vec;
          for(size_t i = 0; i < nums.size();i++){
            vec.push_back(nums[nums[i]]);
          }
        return vec;
}

int main(){



  return 0;
}
