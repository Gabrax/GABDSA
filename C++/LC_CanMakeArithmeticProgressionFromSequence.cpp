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

bool canMakeArithmeticProgression(std::vector<int>& arr) {
        if(arr.size()==2){
            return true;
        }else{
        std::sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if((arr[i]-arr[i-1])!=diff){
                return false;
            }
        }
    }
    return true;
}



int main(){
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);


   std::vector<int> arr = {1,2,4}; 
   bool res = canMakeArithmeticProgression(arr);
   if(res){
        puts("True");
   }else{
        puts("False");
   }
  
   

    return 0;
}
