#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr[10]) {
    std::string str = "(";
    for (int i = 0; i < 10; ++i) {
        str += std::to_string(arr[i]); 

        if (i == 2) { 
          str += ") ";
        } else if (i == 5) { 
          str += "-";
        }
    }
    return str;
}

int main(){

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

  std::cout << createPhoneNumber(arr);

}
