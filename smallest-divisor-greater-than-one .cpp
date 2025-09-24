//find the smallest diviosr greater than one


#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    for (int x= 2; x<=n; x++) {

        if (n%x==0) {
            cout<<"the smallest divisor is:"<<x;
            break;
        }
    }
}