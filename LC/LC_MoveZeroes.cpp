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

void moveZeroes(std::vector<int>& nums) {
  
    
    size_t i = 0;
    size_t count = 0;
    while (i < nums.size()) {
        if (nums[i] == 0) {
            nums.erase(nums.begin() + i);
            count++; // Erase the element
        } else {
            ++i; // Move to the next element
        }

    }
    for (size_t i = 0; i < count; i++){
        nums.push_back(0);
    }
}

void moveZeroes2(std::vector<int>& nums) { //faster way
        std::vector<int>res;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                res.push_back(nums[i]);
            }
        }

        int itr = nums.size() - res.size();

        for (int i = 0; i < itr; i++){
            res.push_back(0);
        }

        for (int i = 0; i <nums.size(); i++)
            nums[i] = res[i];
    }

int main(){

    std::vector<int> nums = {0,0};
    
    moveZeroes(nums);

    for (size_t i = 0; i < nums.size(); i++){
        std::cout << nums[i] << '\n';
    }

    

    


   
    std::cin.get();
}
