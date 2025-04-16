#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, a, b, c;
    std::cin >> n >> a >> b >> c;

    std::vector<int> dp(n + 1, -1); 
    dp[0] = 0; 

    for (int i = 0; i <= n; ++i) {
        if (dp[i] != -1) {  
            if (i + a <= n) dp[i + a] = std::max(dp[i + a], dp[i] + 1);
            if (i + b <= n) dp[i + b] = std::max(dp[i + b], dp[i] + 1);
            if (i + c <= n) dp[i + c] = std::max(dp[i + c], dp[i] + 1);
        }
    }

    std::cout << dp[n] << '\n'; 
}
