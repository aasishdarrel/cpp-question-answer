/* In this article, we will explore a problem-solving technique in C++ to calculate the day before a given day. This involves leveraging modular arithmetic and conditional checks. The goal is to determine the previous day based on a numerical representation of the week, where 0 corresponds to Sunday, 1 to Monday, 2 to Tuesday, and so on, up to 6 for Saturday.
Problem Description

You are provided with:

    d: A numerical representation of a current day.
    n: The number of days to go back.

Your task is to calculate the day before N days. For example:

    If d = 1 (Monday) and n = 1, the output is 0 (Sunday).
    If d = 0 (Sunday) and n = 9, the output is 5 (Friday).

Solution Steps

To solve this problem, we use the following steps:

    Reduce N to a Cyclic Range (0-6):
        Compute N % 7. This ensures N is within a single week's range since the week repeats cyclically every 7 days.
    Subtract N from D:
        Compute D - (N % 7) to find the preliminary day before N days.
    Handle Negative Results:
        If the result of the subtraction is negative, add 7 to bring it back within the valid range of 0-6.
    Output the Result:
        Return the calculated day. */

#include<iostream>
using namespace std ;

int main()

{

    int n = 1;
    int d = 1;

    int x = (n % 7);
    int ans =(d - x);

    if (ans >=  0 ) {
        cout <<ans <<endl;
    }
    else {
    cout <<ans+7<<endl;
}
return 0;
}