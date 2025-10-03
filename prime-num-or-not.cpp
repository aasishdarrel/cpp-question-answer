#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<" enter the number to find prime or not:";
    cin>>n;
    if (n == 0 || n == 1) {
        cout<<"neither prime nor composite";

    }
    else {
        for (int i = 2 ; i <= n-1 ; i++) {
            if (n % i == 0) {
                cout<<"no prime";
                break;
            }else{

                    cout<<"prime";
                break;
            }
        }
    }

}