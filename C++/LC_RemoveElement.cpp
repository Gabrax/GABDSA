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

int removeElement(std::vector<int>& arr, int val) {
        arr.erase(std::remove(arr.begin(),arr.end(),val), arr.end());
        return arr.size();
}


int main(){

    std::vector<int> arr = {3,2,2,3};
    int val = 3;
    std::cout << removeElement(arr,val);


    return 0;
}
