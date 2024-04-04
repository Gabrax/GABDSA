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
#include <limits>


std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::unordered_map<std::string, std::vector<std::string>> map; // key = string, value = vector of strings
        for (size_t i = 0; i < strs.size(); ++i){
            std::string str = strs[i]; // assign the string to new string
            std::string sorted = str; // assign new string to new sorted string
            std::sort(sorted.begin(), sorted.end()); // sort sorted string
            map[sorted].push_back(str); // on a place of sorted string push the same unsorted string // key = sorted string value = same unsorted string
        }
        std::vector<std::vector<std::string>> res;
        for (auto & i : map){
            res.push_back(i.second); // bacuse the value of map is vector of strings, this line pushes just the values(vectors of strings) to res vector
        }
    return res;
}

int main(){
    
    std::vector<std::string> strs = {"eat","tea","tan","ate","nat","bat"};
    std::vector<std::vector<std::string>> res = groupAnagrams(strs);

     for (const auto& group : res) { 
        for (const auto& word : group) { 
            std::cout << word << " "; 
        }
        std::cout << std::endl; 
    }
    


    return 0;
}
