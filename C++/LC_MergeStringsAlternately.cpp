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

std::string mergeAlternately(std::string s, std::string k) {
        std::string res;

        auto t1 = s.begin();
        auto t2 = k.begin();

        while(t1 != s.end() && t2 != k.end()){
            res.push_back(*t1);
            res.push_back(*t2);
            t1++;
            t2++;
        }

        while(t1 != s.end()){
            res.push_back(*t1);
            t1++;
        }

        while(t2 != k.end()){
            res.push_back(*t2);
            t2++;
        }

    return res;
    
};

int main(){

std::string s,k;
std::cin >> s >> k;

std::cout << mergeAlternately(s,k) << '\n';





    


std::cin.get();
}
