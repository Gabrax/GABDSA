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
#include <limits>

bool containsDuplicate(std::vector<int>& nums) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
        std::map<int,int> map;
        for(const auto& i : nums){
            map[i]++;
        }
        for(const auto& i : map){
            if(i.second > 1){
                return true;
            }
        }
    return false;
}

bool containsDuplicate2(std::vector<int>& nums) {
       std::ios::sync_with_stdio(0);
       std::cin.tie(0);

       sort(nums.begin(),nums.end());
       for(int i = 1; i < nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
       }
    
       return false;
    }

int main(){
    
    std::vector<int> nums = {1,2,3,1};
    std::cout << containsDuplicate2(nums);

    return 0;
}
