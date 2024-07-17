#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>


int main()
{
    
    unsigned int t;
    std::cin >> t;
    while(t--){
        long long n,k,x;
        std::cin >> n >> k >> x;
        if(x*2>=k*(k+1) && 2*x <= n*(n+1)-(n-k)*(n-k+1)){
            puts("YES");
        }else{
            puts("NO");
        }

    }
   
    


std::cin.get();
}
