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

int maxArea(std::vector<int>& height) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);

        int res = 0; int area = 0;
        int l = 0; int r = height.size()-1;
        
        while(l < r){
            int area = (r-l) * std::min(height[l],height[r]);
            res = std::max(res,area);
            if(height[l] <= height[r]) l++;
            else r--;
        }

        return res; 
}


int main(){
    std::vector<int> height = {1,1};
    std::cout << maxArea(height);

    return 0;
}

