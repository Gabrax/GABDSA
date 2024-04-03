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

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::unordered_map<int,int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];
        if(map.find(comp) != map.end()){
            return {map[comp], i};
        }
        map.insert({nums[i],i});
    }
    return {};        
}

int main(){
    std::vector<int> nums = {2,7,11,15};
    int t = 9;
    std::vector<int> arr = twoSum(nums,t);
    
    if (arr.size() == 2) {
        std::cout <<  arr[0] << " and " << arr[1] << '\n';
    } else {
        std::cout << "nope"<< '\n';
    }
    

    return 0;
}
