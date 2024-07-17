#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>


int minEatingSpeed(std::vector<int>& nums, int target) {

        std::ios::sync_with_stdio(0);
        std::cin.tie(0);


        int lo = 1;
        int hi = 0;
        
        for(int i = 0; i < nums.size();i++){
              
            hi = std::max(hi,nums[i]);
        }

        int res = hi;  

        while(lo<=hi){
            int k = lo + (hi - lo)/2;
            long int hours = 0;

            for(int i = 0; i < nums.size();i++){
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


int main (int argc, char *argv[]) {
  

  std::vector<int> arr = {3,6,7,11};
  int target = 8;
  std::cout << minEatingSpeed(arr, target);



  return 0;
}
