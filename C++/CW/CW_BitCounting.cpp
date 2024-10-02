#include <iostream>


unsigned countBits(unsigned long long n){


    unsigned count = 0;

    int i = 0;
    while (n > 0) {

        if(n%2 == 1) count++; 
        n = n / 2;
        i++;
    }
  return count;
}

int main(){

  std::cout << countBits(1234);
}
