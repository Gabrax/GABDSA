#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int findKthLargest( std::vector<int>& nums, int k) {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
        
  std::sort(nums.rbegin(),nums.rend());

  return nums[k-1];
}

int main(){

  std::vector<int> arr = {3,2,1,5,6,4};
  int k = 2;
  std::cout << findKthLargest(arr,k);

  return 0;
}
