// Accept a number and reverse the nnumber

#include<iostream>

using namespace std;
int main() {
    int number, remender, reverse = 0;
    cout<<"Enter a number: ";
    cin>>number;
    while (number > 0) {
        remender = number % 10;
        reverse = (reverse * 10) + remender;
        number /= 10;
    }
    cout << "Reverse number: "<<reverse;
    return 0;
}