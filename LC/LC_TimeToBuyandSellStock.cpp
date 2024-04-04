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



int maxProfit(std::vector<int>& nums) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int buy = nums[0];
    int profit = 0;
    
    for (size_t i = 0; i < nums.size(); ++i) {
        if (buy > nums[i]) {
            buy = nums[i];
        }
        profit = std::max(profit,nums[i] - buy);
    }
    return profit;
}

int main(){
    std::vector<int> prices = {7,1,5,3,6,4};
    std::cout << maxProfit(prices);

    return 0;
}
