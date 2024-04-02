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

std::vector<int> merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    std::vector<int> res;
    for (size_t i = 0; i < m; i++)
    {
        res.push_back(nums1[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        res.push_back(nums2[i]);
    }

    std::sort(res.begin(),res.end());
    return res;
}

//leetcode is bullshit

void merge2(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    nums1.resize(m); 
    nums1.insert(nums1.end(), nums2.begin(), nums2.end()); // wstawia z num2 na koniec num1
    std::sort(nums1.begin(), nums1.end());
}

int main(){
    
    int m = 0; int n = 1;

    std::vector<int> arr1 = {0};
    std::vector<int> arr2 = {1};
    std::vector<int> arr = merge(arr1,m,arr2,n);
    for(int i : arr){
        std::cout << i << '\n';
    }

    
    

    return 0;
}
