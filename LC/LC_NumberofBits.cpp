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

int hammingWeight(int n) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
        return count;
}

int main(){

    int n = 9;
    std::cout << hammingWeight(n);

    return 0;
}
