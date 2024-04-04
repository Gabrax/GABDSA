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

void rotate(std::vector<int>& nums, int k) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        std::cout.tie(0);
       for (size_t i = 0; i < k; i++)
       {
        int back = nums.back();
        nums.pop_back();
        nums.insert(nums.begin(),back);
       }
}

void rotate2(std::vector<int>& nums, int k) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n = nums.size();
    k = k % n; 
    
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

int main(){
    int k = 3;
    std::vector<int> nums = {1,2,3,4,5,6,7};
    rotate(nums,k);
    for(const auto& i : nums){
        std::cout << i;
    }

    return 0;
}
