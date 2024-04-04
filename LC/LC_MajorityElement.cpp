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

int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int,int> map;
        for(auto i : nums){
            map[i]++;
        }
        size_t occur = 0;
        size_t max_val = 0;
        for(const auto& i : map){
             if(i.second > occur){
                occur = i.second;
                max_val = i.first;
             }
        }
        return max_val;
}

int main(){
    std::vector<int> nums = {3,2,3};
    std::cout << majorityElement(nums);
        

    return 0;
}
