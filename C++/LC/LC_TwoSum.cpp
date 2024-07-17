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
        if(map.find(comp) != map.end()){ //checks if comp exists in map
            return{map[comp],i}; //return the value of the key and index
        }
        map.insert({nums[i],i}); // insert value from nums and index
    }

    return {}; // return empty vector
}

int main(){
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::unordered_map<int,int> map;

    std::vector<int> arr = twoSum(nums,target);
    
    if (arr.size() == 2) {
        std::cout <<  arr[0] << " and " << arr[1] << '\n';
    } else {
        std::cout << "nope"<< '\n';
    }

    

    return 0;
}
