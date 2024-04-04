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

int removeDuplicates(std::vector<int>& nums) {
        std::unordered_set<int> arr;
        for(const auto i : nums){
            arr.insert(i);
        }
        return arr.size();
}

//leetcode is BS again

int removeDuplicates2(std::vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
}

int main(){
    std::vector<int> nums = {1,1,2};
    std::cout << removeDuplicates2(nums); 

        

    return 0;
}
