#include<iostream>
using namespace std;

int main() {

int m ;
    cout<<"enter the number of rows you want to enter";
    cin>>m;
    int n;
    cout<<"enter the number of columns you want to enter";
    cin>>n;

    for(int i = 1 ; i<= n;i++) {
        cout<<m*i<<" ";
    }
    return 0;

}