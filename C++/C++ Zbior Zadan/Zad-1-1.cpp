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

unsigned int find_max(const std::vector<unsigned int>& arr){
    unsigned int max = arr[0];

    for(size_t i = 0; i < arr.size();i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;   
}
void print_container(const std::vector<unsigned int>& arr) 
{
    for (int i : arr)
        std::cout << i << ' ';
    std::cout << '\n';
}

int main(){

    std::vector<unsigned int> arr;
    for (size_t i = 0; i < 3; i++)
    {   unsigned int n;
        std::cin >> n;
        arr.push_back(n);
    }

    unsigned int max_val = find_max(arr);
    for (std::vector<unsigned int>::iterator it = arr.begin(); it != arr.end();)
    {
        if(*it == max_val){
            it = arr.erase(it);
        }else{
            it++;
        }
    }
    int res = 0;
    for(size_t i : arr){
        res += i;
    }

    for (size_t i = 0; i < max_val; i++)
    {
        std::cout << res << '\n';
    }
    

    //print_container(arr);

    

    return 0;
}
