#include <cstdio>
#include <iostream>


 int main(){

  int T;
  std::cin >> T;

   int Acount = 0;
   int Bcount = 0;

   while(T--){
     int a,b;
     std::cin >> a >> b;
     if(a > b) Acount++;
     else if(b > a) Bcount++;
   }
  if(Acount > Bcount) puts("Mishka");
  else if(Acount < Bcount) puts("Chris");
  else puts("Friendship is magic!^^");

 }
