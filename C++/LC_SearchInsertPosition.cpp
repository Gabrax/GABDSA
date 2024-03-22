#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <cctype>

int searchInsert(std::vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        int mid = 0;

        while(lo<=hi){
            mid = (lo + hi)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                lo=mid+1;
            }else{
                hi=mid-1;
            }
        }
        return lo;
    }

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

   std::vector<int> nums = {5};
    int x = 5;

   std::cout << searchInsert(nums,x) << '\n';
   

    std::cin.get();
}
