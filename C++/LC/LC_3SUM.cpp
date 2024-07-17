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
#include <cmath>
#include <limits>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        std::vector<std::vector<int>> res;

        if(nums.size() < 3){
            return res;
        }

        for (int i = 0; i < nums.size()-2; i++)
        {
            if(nums[i] > 0) break;
            
            if(i > 0 && nums[i-1] == nums[i]) continue;

            int j = i + 1;
            int k = nums.size()-1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                    if(sum < 0)j++;
                    else if(sum > 0) k--;
                    else
                    {
                        res.push_back({nums[i], nums[j],nums[k]});

                        while(j < k && nums[j] == nums[j + 1]){
                            j++;
                        }
                        j++;
                        while(j < k && nums[k - 1] == nums[k]){
                            k--;
                        }
                        k--;
                    }
            }
        }
    return res;
}

int main(){



    return 0;
}
