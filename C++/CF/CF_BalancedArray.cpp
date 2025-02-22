#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <array>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve(int n) {
    if ((n / 2) % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<int> evens, odds;

    for (int i = 1; i <= n / 2; i++) {
        evens.push_back(2 * i);
    }

    for (int i = 1; i < n / 2; i++) {
        odds.push_back(2 * i - 1);
    }

    int last_odd = evens.back() + (n / 2) - 1;
    odds.push_back(last_odd);

    for (int num : evens) cout << num << " ";
    for (int num : odds) cout << num << " ";
    cout << "\n";
}

int main() {
    std::cin.tie(0)->sync_with_stdio(0);
 
    int32_t T;
    std::cin >> T;
    while(T--){
    
      int32_t n;
      std::cin >> n;
      solve(n);  
    }
}
