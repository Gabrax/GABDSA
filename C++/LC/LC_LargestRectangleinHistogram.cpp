#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

int largestRectangleArea(const std::vector<int>& heights) {
    std::stack<int> stk;
    int maxArea = 0;

    for (int i = 0; i <= heights.size(); i++) {
        int h = (i == heights.size()) ? 0 : heights[i];

        while (!stk.empty() && h < heights[stk.top()]) {
            int height = heights[stk.top()];
            stk.pop();
            int width = stk.empty() ? i : (i - stk.top() - 1);
            maxArea = std::max(maxArea, height * width);
        }

        stk.push(i);
    }

    return maxArea;
}

int main()
{

  std::cout << largestRectangleArea({2,1,5,6,2,3});

}
