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


std::string multiply(std::string num1, std::string num2) { //my bad implementation
        long long re1 = std::stoi(num1);
        long long re2 = std::stoi(num2);
        long long res = re1 * re2;
        std::string str = std::to_string(res);
        return str;

}

std::string multiply(std::string num1, std::string num2) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
        if (num1 == "0" || num2 == "0") return "0";
        
        std::vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        std::string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += std::to_string(res[i++]);
        
        return ans;
    }

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::string num1 = "6913259244"; 
    std::string num2 = "71103343";
    std::cout << multiply(num1,num2) << '\n';
   

    return 0;
}
