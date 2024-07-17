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
#include <cmath>
#include <limits>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::unordered_map<int,int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];
        if(map.find(comp) != map.end()){ //checks if comp exists in map
            return{map[comp]+1,i+1}; //return the value of the key and index
        }
        map.insert({nums[i],i}); // insert value from nums and index
    }

    return {}; // return empty vector
}

std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        std::vector<int>nums;
        int i = 0;
        int j = numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]<target) i++;
            else
            {
                nums.push_back(i+1);
                nums.push_back(j+1);
                return nums;
            }
        }
    return {};
}


int main(){
    int target = 9;
    std::vector<int> nums = {2,7,11,15};
    std::vector<int> res = twoSum(nums,target);
    for(int i : res){
        std::cout << i << " ";
    }


    return 0;
}
