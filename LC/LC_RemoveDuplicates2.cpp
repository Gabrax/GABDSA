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
        int j = 1;
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(i == 0 || nums[i] != nums[i - 1]){
                count = 1;
            }else{
                count++;
            }
            if(count <= 2 ){
                nums[j++] = nums[i];
            }
        }
        return j;
}

int removeDuplicates2(std::vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(j == 1 || nums[i] != nums[j - 2]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
}

int main(){
    std::vector<int> nums = {1,1,1,2,2,3};
    std::cout << removeDuplicates2(nums); 

    return 0;
}
