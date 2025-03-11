#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>


int minEatingSpeed(const std::vector<int>& nums, int target) {

  std::ios::sync_with_stdio(0);
  std::cin.tie(nullptr);

  int lo = 1;
  int hi = *std::max_element(nums.begin(),nums.end());
  
  int res = hi;  

  while(lo<=hi){
      int k = lo + (hi - lo)/2;
      double hours = 0;

      for(int i = 0; i < nums.size();++i){
          hours += std::ceil((double) nums[i] / k);
      }

      if(hours <= target){
          res = std::min(res,k);
          hi = k - 1;
      }else{
          lo = k + 1;
      }
  }
  return res;
}


int main ()
{
  
  std::cout << minEatingSpeed({25,10,23,4}, 4);

}
