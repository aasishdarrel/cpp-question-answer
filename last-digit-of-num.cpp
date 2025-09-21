/* In this article, we will discuss how to find the last digit of a given number. This problem includes handling both positive and negative integers to determine the correct last digit. The solution is simple and involves the modulus operator % to isolate the last digit. We'll also explore how to handle negative numbers effectively to ensure that the output is always a positive last digit.
Problem Statement

Given an integer, the task is to find its last digit. For instance:

For 123, the last digit is 3.
For −352, the last digit is 2.
For 1049, the last digit is 9.
For −49, the last digit is 9.

Observations and Approach
Key Observations:

When dividing a number by 10, the remainder gives the last digit.
For example, 123%10=3, which is the last digit.
If the number is negative, using the modulus operator directly will yield a negative last digit.
For example, abs(−235%10) = 5.

Solution Steps:

Calculate the last digit using the modulus operator % 10.
If the number is negative, use the abs() function to convert the last digit to a positive value. */





#include<iostream>
using namespace std;

int main() {

    long long num;
    cout<< "enter the number :";
    cin >> num;
    cout << "the last number is :"<< (abs(num) % 10 )<<endl; // used "abs" for converting -ve number to +ve and +ve and +ve
    return 0 ;
}