#include <iostream>
#include <vector>
#include <algorithm>


int missingNumber(std::vector<int>& nums) {

  std::cin.tie(0)->sync_with_stdio(0);

  std::sort(nums.begin(),nums.end());

  for (size_t i = 0; i < nums.size();i++)
  {
    if(nums[i] != i)
       return i;
  }
  return nums.size();
}

int main()
{
  std::vector<int> vec = {0,1};

  std::cout << missingNumber(vec);
}
