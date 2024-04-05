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

int longestConsecutive(std::vector<int>& nums) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::unordered_set<int> set(nums.begin(),nums.end());
    int longest = 0;
    
    for(auto& i : nums){
        if(!set.count(i - 1)){
            int streak = 1;
            while (set.count(i + streak))
            {    
                streak++;
            }
            longest = std::max(longest,streak);
        }
    }
    return longest;
}

int longestConsecutive2(std::vector<int>& nums){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::unordered_set<int> set(nums.begin(),nums.end());

    if(nums.size() == 0){
        return 0;
    }

    int max = 1;
    for(auto& i : set){
        if(set.find(i-1) == set.end()){
            int n = i;
            int count = 1;
            while (set.find(n+1) != set.end())
            {
                count++;
                n++;
            }
            max = std::max(max,count);
        }
    }
    return max;
}

int main(){

    std::vector<int> nums = {100,4,200,1,3,2};
    std::cout << longestConsecutive2(nums);
    



    return 0;
}
