/* Given an integer n. Write a program to print all the divisors of n in a single line.

Examples:

Input: n = 12
Output: 1 2 3 4 6 12
Explanation: 12 is divisible by 1 2 3 4 6 12.

Input: n = 10
Output: 1 2 5 10
Explanation: 10 is divisible by 1 2 5 10. */









#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number to find its divisor:";
    cin>>n;

    for (int i = 1; i<= n ;i++) {
        if (n%i==0) {
            cout<<i<<",";
        }
    }
    return 0;
}