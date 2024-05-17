#include <algorithm>
#include <iostream>
#include <iterator>
#include <limits>
#include <set>
#include <unordered_set>
#include <vector>

int thirdMax(std::vector<int>& nums) {
        std::set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()>=3){    
            int Third_index_from_last = s.size()-3;
            auto third_maximum = std::next(s.begin(),Third_index_from_last);
            return *third_maximum;
        }
            return *--s.end(); 
    }

int main(){

  std::vector<int> nums = {1,2};

  std::cout << thirdMax(nums);

  return 0;
}
