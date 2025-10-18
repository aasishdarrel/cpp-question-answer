#include<iostream>
using namespace std;

int main () {
    int arr[100]{67,3473,34,3434,434};
    cout<<arr<<endl;//prints the address of the first element
    cout<<arr[0]<<endl;//prints the element stored in the index 0
    cout<<arr[3]<<endl;//prints the element stored in the index 3

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);

    return 0;
}