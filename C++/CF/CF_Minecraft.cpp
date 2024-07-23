#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
 
 

int n, k;
std::vector<std::vector<bool>> memo;
std::string res;
std::vector<int> cnt;
std::string s;

bool rec(int i, int cur) {
    if (i == k) {
        if (cur == 0) {
            return true;
        }
        return false;
    }
    if (memo[i][cur]) return false;

    memo[i][cur] = true;

    for (int c = 0; c < 2; ++c) {
        int q = cur;
        if (c == 0){
            q += cnt[i];
        } else {
            q += n - cnt[i];
        }
        if ((q & 1) == s[i] - '0') {
            if (rec(i + 1, q / 2)) {
                res += char(c + '0');
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    unsigned T;
    std::cin >> T;
    while (T--) {
        std::cin >> n >> k;
        std::cin >> s;
        std::reverse(s.begin(), s.end());
        cnt = std::vector<int>(k);
        for (int i = 0; i < n; ++i) {
            std::string t;
            std::cin >> t;
            std::reverse(t.begin(), t.end());
            for (int j = 0; j < k; ++j){
                cnt[j] += t[j] - '0';
            } 
                
        }
        memo = std::vector<std::vector<bool>>(k, std::vector<bool>(n, false));
        res = "";
        rec(0, 0);
        if (res.empty()) std::cout << "-1\n";
        else std::cout << res << '\n';
    }
}

// NOT EFFICIENT WAY

// unsigned BintoDec(const std::string& str) {
//     return std::stoi(str,nullptr,2);
// }
 
// int main() {
//     std::cin.tie(0)->sync_with_stdio(0);
 
//     unsigned T;
//     std::cin >> T;
//     while (T--) {
//         unsigned n, k;
//         std::string corebinary;
//         std::vector<unsigned> vec;
//         std::string inputstrings;
 
//         std::cin >> n >> k;
//         std::cin >> corebinary;
 
//         for (int i = 0; i < n; i++) {
//             std::cin >> inputstrings;
//             vec.push_back(BintoDec(inputstrings));
//         }
 
        
//         std::vector<unsigned> vec2(vec.begin(),vec.end());
 
        
//         int s = BintoDec(corebinary);
//         bool found = false;
 
        
//         for (unsigned x = 0; x < (1u << k) && x <= 2000000; x++) {
//             int sum = 0;
 
//             for (const auto& v : vec2) {
//                 sum += (v ^ x);
//             }
            
//             if (sum == s) {
//                 std::cout << std::bitset<32>(x).to_string().substr(32 - corebinary.size()) << '\n';
//                 found = true;
//                 break;
//             }
//         }
 
//         if (!found) {
//             std::cout << -1 << '\n';
//         }
        
//     }
// }
