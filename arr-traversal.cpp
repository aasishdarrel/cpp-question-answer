#include<iostream>
using namespace std;

int main( ) {

    int darrel[10] = { 1,1,1,1,1,1,1,1};
    int n = sizeof(darrel)/sizeof(darrel[0]);
    for(int i = 0 ; i<n ; i++) {
        cout<<darrel[i]<<" "<<endl;
    }
    for(int x : darrel)// range based for loop to print all element in the array
        {
        cout<<x<<" ";
    }



    return 0 ;

}