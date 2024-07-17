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

bool isAnagram(const std::string& s,const std::string& k) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    if(s.length() != k.length()){ //checks if length of strings are the same
        return false;
    }

    std::unordered_map<char,int> map; // unordered map so it will run faster cuz it woudlnt sort in background
    for(const auto& i : s){
        map[i]++; // inserts the characters and their occurences in map 
    }
    for(const auto& i : k){
        map[i]--; // dumps out from k the corresponding characters to string s
        if(map[i] < 0){// if they are left characters it means, in string k have other letters
            return false;
        }
    }
    return true;
}


int main(){

    std::string s,k;
    std::getline(std::cin,s);
    std::getline(std::cin,k);

   
   std::cout << isAnagram(s,k);
    /*if (isAnagram(s, k)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }*/

   
std::cin.get();
}
