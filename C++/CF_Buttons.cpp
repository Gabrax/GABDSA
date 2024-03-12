#include <iostream>
#include <vector>
#include <cmath>


int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
      int a,b,c;
      std::cin >> a >> b >> c;
      
      if(c % 2 == 0)
      {
        if(a > b)
        {
            std::cout << "First" <<'\n';
        }
        else{
            std::cout << "Second" <<'\n';
        }
      }
      else{
        if(b > a)
        {
            std::cout << "Second" <<'\n';
        }
        else{
            std::cout << "First" <<'\n';
        }
      }
      
      
        

       
    }


    std::cin.get();
}
