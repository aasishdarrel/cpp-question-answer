// postive even or odd and negative odd or even


#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number:";
    cin>>n;
    if (n>0) {
        cout<<n<<":the number is postive"<<endl;
        if (n%2==0) {
            cout<<n<<":the number is even"<<endl;
        }
        else {
            cout<<n<<": the number is odd"<<endl;
        }

    }

    else if (n < 0) {
        cout<<n<<":the number is negative"<<endl;
        if (n%2==0) {
            cout<<n<<":the number is even"<<endl;
        }
        else
        {
            cout<<n<<":the number is odd"<<endl;
        }
    }

    else {
        cout<<"zero"<<endl;
    }

    return 0;
}