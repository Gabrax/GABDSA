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

bool isMonotonic(std::vector<int>& nums) {
        if(std::is_sorted(nums.begin(),nums.end()) || std::is_sorted(nums.rbegin(),nums.rend())){
            return true;
        }
    return false;
}

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

   std::vector<int> nums = {1,3,2};
   bool res = isMonotonic(nums);
   if(res){
        puts("True");
   }else{
        puts("False");
   }

    std::cin.get();
}
