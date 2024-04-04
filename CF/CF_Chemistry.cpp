#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main()
{
    int t;
    std::cin >> t;
    while(t--){
        int n,k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        std::unordered_map<char, int> frequencyMap;
        
        for(const auto& i: s)
        {
            frequencyMap[i]++;
        }
        int count = 0;
        for (const auto& pair : frequencyMap) {
            if (pair.second % 2 != 0) {
                count++;
            }
        }
        

        if(count <= (k+1))
        {
            puts("YES");
        }else{
            puts("NO");
        }

    
} 


std::cin.get();
}
