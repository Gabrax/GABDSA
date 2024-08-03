#include <iostream>
#include <algorithm>
#include <set>
#include <string>

bool isSubsequence(const std::string& str1, const std::string& str2) {
    std::cin.tie(0)->sync_with_stdio(0);

    if (str1.size() == 0) return true;
    if (str2.size() == 0) return false;

    int i = 0, j = 0;

    while (j < str2.size()) {
        if (str1[i] == str2[j]) {
            i++;
            if (i == str1.size()) return true;
        }
        j++;
    }
    return false;
}


int main(){

std::string str1 = "abc";
std::string str2 = "ahbgdc";

std::cout << isSubsequence(str1,str2); 

}
