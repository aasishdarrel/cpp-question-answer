/* Given a positive integer, n. Find the factorial of n.

Examples :

Input: n = 5
Output: 120
Explanation: 1 x 2 x 3 x 4 x 5 = 120

Input: n = 4
Output: 24
Explanation: 1 x 2 x 3 x 4 = 24 */

#include<iostream>
using namespace std;

int fac (int n ) {
    int ans = 1;

    while (n>0) {

            ans = ans * n;
        n--;

    }
    return ans;
}


int main() {
    cout<<"enter the number :";
    int n;
    cin>>n;

    int result = fac(n);
    cout<<"factorial is "<<result<<endl;
}