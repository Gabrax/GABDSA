#include <iostream>
#include <vector>
#include <unordered_map>



bool isPossibleToSplit(std::vector<int>& nums){
        std::unordered_map<int,int> arr;

        for(size_t i = 0; i < nums.size();i++){
            arr[nums[i]]++;
            if(arr[nums[i]] > 2){
                return false;
            }
        }
    return true;
}


int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    bool res = isPossibleToSplit(nums);

    if(res == true){
        puts("True");
    }else{
        puts("False");
    }


    return 0; // Explicitly return 0 to indicate successful execution
}
