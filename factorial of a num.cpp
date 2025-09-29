#include<iostream>
using namespace std;

int main() {
    int n ;
    cout<<"enter the number to find the factorial:";
    cin>>n;
    int ans = 1;


    while (n>0) {
     ans  = ans * n;
        n--;
    }
    cout<<ans<<endl;

    return 0;
}
