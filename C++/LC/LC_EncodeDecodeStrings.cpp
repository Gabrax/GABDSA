#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::string encode(std::vector<std::string>& strs) {

  std::string res = "";
  for(auto& i : strs) res += i + '/';
  return res;
}

std::vector<std::string> decode(std::string s) {
    std::vector<std::string> result;
    std::istringstream stream(s); // Create a stream from the input string
    std::string word;

    // Use std::getline to split by ',' delimiter
    while (std::getline(stream, word, '/')) {
        result.push_back(word); // Add each word to the result vector
    }

    return result;
}

int main()
{

  std::vector<std::string> vec = {"neet","code","love","you"};

  std::vector<std::string> res = decode(encode(vec));
  
  for (auto& i : res) std::cout << i << " ";
}
