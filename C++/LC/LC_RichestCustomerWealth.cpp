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


int maximumWealth(const std::vector<std::vector<int>>& acc) {
    int highest = std::numeric_limits<int>::min(); 
    for (const auto& innerVec : acc) { // iteration over each inner vector
        int sum = 0;
        for (int value : innerVec) { // iterates over each element in current inner vector on index i
            sum += value;
        }
        highest = std::max(highest, sum); 
    }
    return highest;
}

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::vector<std::vector<int>> acc = {{1,5},{7,3},{3,5}};
    
    std::cout << maximumWealth(acc) << '\n';

    return 0;
}
