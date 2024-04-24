#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

int characterReplacement(const std::string& s, int k) {
 
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);
  
  std::vector<int> vec(26);

  int res = 0, ptr1 = 0, ptr2 = 0, maxcount = 0;

  while (ptr2 < s.length()) {
    vec[s[ptr2] - 'A']++;
    maxcount = std::max(maxcount,vec[s[ptr2]-'A']);
    if(ptr2 - ptr1 + 1 - maxcount > k){
      vec[s[ptr1] - 'A']--;
      ptr1++;
    }
    res = std::max(res,ptr2 - ptr1 + 1);
    ptr2++;
  }
  return res;
}

int main(){

  std::string str = "AABABBA";
  int k = 1;
  std::cout << characterReplacement(str,k);

  return 0;
}

