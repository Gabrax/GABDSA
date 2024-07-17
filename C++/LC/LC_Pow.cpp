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


double myPow(double x, int n) {
    double res = std::pow(x,n);
    
    return res;
}

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    double x = 2.00000;
    int n = 10;

   
    
    std::cout << myPow(x,n) << '\n';
   

    return 0;
}
