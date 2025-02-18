#include <iostream>
#include <vector>
#include <algorithm>

int maxArea(const std::vector<int>& height) {
    std::cin.tie(0)->sync_with_stdio(0);

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
    std::vector<int> height = {1,7,2,5,4,7,3,6};
    std::cout << maxArea(height);
}

