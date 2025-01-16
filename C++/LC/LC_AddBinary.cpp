#include <bitset>
#include <iostream>
#include <string>
#include <algorithm>

std::string addBinary(const std::string& a, const std::string& b) {
    int maxLength = std::max(a.size(), b.size());
    std::string result;
    int carry = 0;

    std::string str1 = std::string(maxLength - a.size(), '0') + a;
    std::string str2 = std::string(maxLength - b.size(), '0') + b;

    for (int i = maxLength - 1; i >= 0; --i) {
        int sum = (str1[i] - '0') + (str2[i] - '0') + carry;
        result += (sum % 2) + '0';  
        carry = sum / 2;            
    }

    if (carry) {
        result += '1';
    }

    std::reverse(result.begin(), result.end());

    return result;
}

int main(){

  std::cout << addBinary("1010", "1011");

}
