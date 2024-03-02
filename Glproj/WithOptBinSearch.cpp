#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>


int BinSearch(const std::vector<int>& arr, int low, int high, std::string& zadanie)
{
    if(low == high)
    {
        return arr[low];
    }

    int mid = (low + high)/2;

    if(zadanie == "hi")
    {
        if(arr[mid] < arr[mid + 1])
        {
            return BinSearch(arr, mid+1,high,zadanie);
        }
        else
        {
            return BinSearch(arr,low,mid,zadanie);
        }
    }
    if(zadanie == "lo")
    {
        if(arr[mid] > arr[mid + 1])
        {
            return BinSearch(arr, mid+1,high,zadanie);
        }
        else
        {
            return BinSearch(arr,low,mid,zadanie);
        }
    }
    
}



int main()
{
//std::ios::sync_with_stdio(0);
//std::cin.tie(0);

int n,k;
std::vector<int> arr;
std::string zadanie;


std::cout << "number of values" << '\n'; 
std::cin >> k;

std::cout << "the values" << '\n'; 
for(int i = 0;i < k;i++)
{

std::cin >> n;
arr.push_back(n);

}

std::cout << "choose hi or lo" << '\n';
std::cin >> zadanie;

int res = BinSearch(arr, 0, arr.size() - 1, zadanie);

std::cout << "Result: " << res << '\n';



std::cin.get();
}
