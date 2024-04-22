#include <iostream>
#include <string>
#include <unordered_set>
#include <algorithm>


int lengthOfLongestSubstring(const std::string& s) {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  
  std::unordered_set<char> set;

  int res = 0, ptr1 = 0, ptr2 = 0;

  while (ptr1 < s.length() && ptr2 < s.length()) {
    if(set.find(s[ptr1]) == set.end()){ // if character is not found in the set
      set.insert(s[ptr1]);
      ptr1++;
      res = std::max(res, ptr1 - ptr2);
    }else{
      set.erase(s[ptr2]);
      ptr2++;
    }
  }
  return res;
}

int main(){

  std::string str = "pwwkew";

  int res = lengthOfLongestSubstring(str);

  std::cout << res;


  return 0;
}
