#include <iostream>
using namespace std;

int main() {
    // code here
    int n;
    cin>>n;
    int fib;

    if(n == 0 or n == 1){
        fib = n;
        cout<<fib;
    }
    else{
        int a= 0 ;
        int b = 1;
        int c = 1;



        for(int i = 2; i <= n; i++){
            int c = a +b;
            a = b ;
            b = c;
            fib = c;

        }
        cout<<fib;
    }

    return 0;
}
