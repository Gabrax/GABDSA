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

char findTheDifference(std::string& s, std::string& t) {
    s+=t; 
    int c=0;
    for(auto x: s)
    {
        c^=x; // Bitwise XOR (^) returns 1 if the bits are different, and 0 if they are the same
    }
       return c;
}


int main(){

std::string s,k;
std::getline(std::cin,s);
std::getline(std::cin,k);

std::cout <<  findTheDifference(s, k) << std::endl;


std::cin.get();
}
