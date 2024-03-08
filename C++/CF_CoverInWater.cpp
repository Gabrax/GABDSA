#include <iostream>
#include <string>
#include <vector>


int main()
{
int t;
std::cin >> t;
while(t--){
    std::string cases;
    int a;
    int empty = 0;
    bool flag = true;
    std::cin >> a;
    std::cin >> cases;
    
    for(int i = 0; i < a;i++)
    {
        if(cases[i] == '.')
        {
            empty++;
        }
        if(i > 0 && i < a - 1)
        {
            if(cases[i-1] == '.' && cases[i] == '.' && cases[i+1] == '.')
            {
                std::cout << 2 << '\n';
                flag = false;
                break;
            }
        }
        
    }
        if(flag)
        {
            std::cout << empty << '\n';
        }
} 


 

std::cin.get();
}
