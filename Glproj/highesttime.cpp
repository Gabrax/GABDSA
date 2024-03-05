#include <iostream>
#include <vector>
#include <algorithm>
#include <string>



int main()
{
    unsigned int a,b,c,d;
    std::cin >> a >> b >> c >> d;
    std::vector<unsigned int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);

    std::sort(arr.begin(),arr.end());

    for(int i = arr.size(); i > 0;i--)
    {
        if(arr[i] == 2)
        {
            a = arr[i];
        }
        else if(arr[i] <= 2)
        {
            a = arr[i];
        }
    }

    for(int i = arr.size(); i > 0;i--)
    {
        if(arr[i] <= 3 && arr[i] != 2)
        {
            b = arr[i];
        }
        
    }

    for(int i = arr.size(); i > 0;i--)
    {
        if(arr[i] <= 5 && arr[i] != 2)
        {
            c = arr[i];
        }
        
    }
    for(int i = arr.size(); i > 0;i--)
    {
        if(arr[i] <= 9 && arr[i] > 5)
        {
            d = arr[i];
        }
        
    }



    std::cout << a << b << ":" << c << d << '\n';

    std::cin.get();    
}