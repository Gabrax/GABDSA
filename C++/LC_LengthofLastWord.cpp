#include <iostream>
#include <string>
#include <algorithm>

int lengthOfLastWord(std::string& str) {
        int count = 0;
        bool isspace = false;
        std::reverse(str.begin(),str.end());

        for(char i : str)
        {
           if(!std::isspace(i)){
            count++;
           }else if(count != 0){
                return count;
           }
           
        }
        return count;
    }


int main()
{
    std::string str;
    std::getline(std::cin,str);
    std::cout << lengthOfLastWord(str) << '\n'; 

    std::cin.get();
}
