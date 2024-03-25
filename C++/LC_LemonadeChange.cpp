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
#include <cctype>
#include <limits>

bool lemonadeChange(std::vector<int>& bills) {
    int five = 0; int ten = 0;
    for (size_t i : bills)
    {
            if(i == 5){
                five++;
            }else if(i == 10){
                if(five == 0){
                    return false;
                }
                five--;
                ten++;
            }else{
                    if(five > 0 && ten > 0){
                        ten--;
                        five--;
                    }else if(five >= 3){
                        five -= 3;
                    }else{
                        return false;
                    }   
            }
    }   
    return true;
}

int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    std::vector<int> bills = {5,5,10,10,20};
    
    std::cout << lemonadeChange(bills) << '\n';
    

    return 0;
}
