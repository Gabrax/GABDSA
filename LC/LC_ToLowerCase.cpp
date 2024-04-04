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

std::string toLowerCase(std::string s) {
        std::string res;
        for(char i : s){
            char k = std::tolower(i);
            res += k;
        }
        return res;
    }

int main(){

std::string s;
std::cin >> s;

std::cout << toLowerCase(s) << '\n';


    


std::cin.get();
}
