#include <iostream>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    while(t--){
        std::vector<int> arr;
        int n,k;
        std::cin >> n;
        for(int i = 0; i < n;i++)
        {
            std::cin >> k;
            arr.push_back(k);
        }
        for(int i = 0; i < arr.size();i++)
        {
            if(arr[0] == 1)
            {
                std::cout << "yes" << '\n';
                break;
            }
            else{
                std::cout << "no" << '\n';
                break;
            }
        }

    }


    std::cin.get();
}
