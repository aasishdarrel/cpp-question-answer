#include<iostream>
using namespace std;

int main() {

   int a,b;
   cout<<"enter the number to find the lcm:";
   cin>>a>>b;


   int maxi = max(a,b);
   int ed = a*b;
   for (int i = maxi; i <= ed ;i++ ) {
      if (i % a == 0 and i% b  == 0 ) {
         cout<<i;
         break;
      }
   }
   return 0;



}