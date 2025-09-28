#include<iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cout<<"enter the number to count the digits:";
    cin>>n;
    if (n==0) {
        count = 1;
    }

    else {
        while (n!=0) {
            n=(n/10);
            count++;
        }
    }

    cout<<"the digit is :"<<count;
    return 0;
}