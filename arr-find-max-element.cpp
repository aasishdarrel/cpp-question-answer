#include<iostream>
using namespace std;

int find_max(int arr[], int n){
    int ans = arr[0];

    for (int i = 0 ; i < n ; i++) {
        if (arr[i]> ans);
        ans = arr[i];

    }
    return ans;

}







int main() {
    int n ;//n to declare the size
    cin>>n;
    int arr[n]; // array initialized with max num

    for (int i = 0 ; i < n; i++) {
        cin>>arr[i];

    }

    int ans = find_max(arr,n);
    cout<<"max:";
    cout<<ans;


}