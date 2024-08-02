#include <cstddef>
#include <iostream>
#include <string>
#include <algorithm>
std::string mergeAlternately(const std::string& word1, const std::string& word2) {

  std::cin.tie(0)->sync_with_stdio(0);

  std::string res;
  
  size_t g_length = std::min(word1.length(),word2.length());

  for(size_t i = 0; i < g_length;i++ ){
    res += word1[i];
    res += word2[i];
  }

  if(word1.length() > g_length) res += word1.substr(g_length);
  else if(word2.length() > g_length) res += word2.substr(g_length);


  return res;
}

int main(){
  std::string str1 = "ab";
  std::string str2 = "pqrs";
  std::cout << mergeAlternately(str1, str2);
}
