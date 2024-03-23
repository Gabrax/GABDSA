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

int arraySign(std::vector<int>& nums) {
        int res = 0;
        for(int num : nums){
            if(num == 0){
                return 0;
            }
            if(num < 0){
                res++;
            }
        }
    return res % 2 == 0 ? 1 : -1;
}

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);


   std::vector<int> nums = {-1,1,-1,1,-1};
   std::cout << arraySign(nums) << '\n';
   

    return 0;
}
