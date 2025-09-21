#include<iostream>

int main() {

    int n;
    std::cout<<"enter the number:";
    std::cin>>n ;
    if (n > 0) {
        std::cout<<"postive"<< std::endl;

    }
    else if ( n <0 ) {
        std::cout<<"negative"<< std::endl;
    }
    else {
        std::cout<<"zero";
    }
}

