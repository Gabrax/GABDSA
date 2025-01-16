#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int>& nums) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
        std::vector<int> res(nums.size(),1); 

        int prefix = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            res[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
        
}

int main(){

  std::vector<int> nums = {1,2,4,6};
  std::vector<int> res = productExceptSelf(nums);
  for(const auto& i : res){
    std::cout << i << " ";
  }

}
