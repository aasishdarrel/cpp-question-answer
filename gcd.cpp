#include<iostream>
using namespace std;

int main () {

    int a,b;
    cout<<"enter the value for a and b:";
    cin>>a>>b;

    int minimum = min(a,b);
    int ans = 1;

    for (int i = 1; i <= minimum; i++) {
        if (a % i== 0 and b % i == 0) {
            ans = i;
        }
    }
    cout<<ans<<endl;
return 0;

}