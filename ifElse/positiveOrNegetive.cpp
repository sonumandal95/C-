// Find if a number is positive or negative
#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    if (number > 0) cout<<"Number is positive.";
    else if (number < 0) cout<<"Number is negative.";
    else cout<<"0 is neither positive nor negative.";
    return 0;
}
