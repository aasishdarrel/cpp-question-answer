#include<iostream>
using namespace std;

int main() {
    //without reference used
    int arr[] = {1,1,1,1,1,3,4};
    for ( int x : arr)
         x = x + 2;

    for ( int x : arr)
        cout<<x<<" ";
    //with reference used
 cout<<endl;
    for ( int &x : arr)
        x = x + 2;

    for ( int x : arr)
        cout<<x<<" ";
    return 0;



}