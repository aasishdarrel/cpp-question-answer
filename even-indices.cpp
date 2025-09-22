/* You are given a string s, you need to print its characters at even indices (index starts at 0).

Examples:

Input: s = "Geeks"
Output: Ges
Explanation: The even indices characters are printed.

Input: s = "DoctorPhenomenal"
Output: DcoPeoea
Explanation: The even indices characters are printed. */
#include<iostream>
using namespace std;
int main() {
    string s;
    cout<<"enter the string :";
    cin>>s;

    for (int i= 0 ; i<s.length();i=i+2)
        cout<<s[i];
    return 0;

}