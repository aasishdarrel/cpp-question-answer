/* Given an integer year. Print "True" (without quotes) if it can represent a leap year, otherwise print "False" (without quotes).

Examples:

Input: year = 2020
Output: True
Explanation: 2020 is leap year as it multilpe of 4 but not a multiple of 100.

Input: year = 2022
Output: False
Explanation: 2022 is not a leap year, as its neither multiple of 400 nor of 4. */
#include<iostream>
using namespace std;
int main() {
    int year;
    cout<<"enter the year to check leap or not :";
    cin>>year;
    if ( year % 4 == 0 and year % 100 != 0)
        cout<<"leap year";
    else if ( year % 400 == 0 )
        cout << "leap year";
    else
        cout <<"not leap year";

}