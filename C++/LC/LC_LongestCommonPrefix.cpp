#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
  
  std::cin.tie(0)->sync_with_stdio(0);

  std::string str = "";

  std::sort(strs.begin(),strs.end());

  std::string a = strs[0], b = strs[strs.size()-1];

  for(int i = 0; i < std::min(a.size(),b.size());i++){
    if(a[i] != b[i]){
      return str;
    }
    str += a[i];
  }
  return str;
}

int main(){

std::vector<std::string> strs = {"flower","flow","flight"};
  std::cout << longestCommonPrefix(strs);


}
