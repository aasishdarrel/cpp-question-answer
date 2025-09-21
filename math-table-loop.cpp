//You are given a number n, take input of n and print its multiplication table in a single line using for loop till n * 10.


#include <iostream>
using namespace std;
int main() {
    int number ;
    cout<<"enter the number for table:";
    cin>>number;

    for (int i = 1 ; i <=10 ;i++ ) {
        cout<<number * i;
        cout<<" ";
    }
    return 0;


}