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

std::vector<int> plusOne(std::vector<int>& digits) {
    int carry = 1;
    for (int i = digits.size()-1; i >= 0; --i) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; // Update the current digit
        carry = sum / 10; // Update the carry for the next iteration
    }
    if (carry > 0) {
        digits.insert(digits.begin(), carry); // Insert the carry as the most significant digit
    }
    return digits;
}

std::vector<int> plusOne2(std::vector<int>& digits) {
                short int i = digits.size() - 1;
        if (i >= 0) {
            while (i != -1) {
                digits[i] += 1;
                if (i == 0 && digits[i] == 10) {
                    digits[i] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else if (digits[i] == 10) digits[i] = 0;
                else break;
                i--;
            }
        }
    return digits;
}

int main(){

    std::vector<int> digits = {1, 2, 3};
    std::vector<int> res = plusOne(digits);
    for (int i : res) {
        std::cout << i << " ";
    }
    std::cin.get();
}
