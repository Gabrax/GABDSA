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

int singleNumber(std::vector<int>& nums) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
        int res = 0;
        for(const auto& i : nums){
            res ^= i;
        }
        return res;
}

int main(){

    std::vector<int> nums = {2,2,1};
    std::cout << singleNumber(nums);



    return 0;
}
