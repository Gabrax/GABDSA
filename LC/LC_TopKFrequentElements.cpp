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

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.second > b.second;
}

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);
        
        std::map<int,int> map;
        for(const auto& i : nums){
            map[i]++;
        }

        std::vector<std::pair<int, int>> freq_vec(map.begin(), map.end());
        std::partial_sort(freq_vec.begin(), freq_vec.begin() + k, freq_vec.end(), compare);

        std::vector<int> res;
        for (int i = 0; i < k; i++)
        {
            res.push_back(freq_vec[i].first);
        }
        
        return res;
}

std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        int n = nums.size();
        
        std::unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        std::vector<std::vector<int>> buckets(n + 1);
        for (auto it = m.begin(); it != m.end(); it++) {
            buckets[it->second].push_back(it->first);
        }
        
        std::vector<int> result;
        
        for (int i = n; i >= 0; i--) {
            if (result.size() >= k) {
                break;
            }
            if (!buckets[i].empty()) {
                result.insert(result.end(), buckets[i].begin(), buckets[i].end());
            }
        }        
        return result;
}

int main(){
std::vector<int> nums = {1,1,1,2,2,3};
int k = 2;
std::vector<int> res = topKFrequent(nums,k);
    for(const auto& i : res){
        std::cout << i << " ";
    }

    return 0;
}
