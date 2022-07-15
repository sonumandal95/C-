// Check if a number is positive ot negative using ternary operator.
// Note: consider 0 as positive

#include<iostream>
using namespace std;

int main () {
    long long int number; //number -> 92346343285685
    cout<<"Enter a number: "<<endl;
    cin>>number;
    cout<<number<<" is "<<(number >= 0 ? "positive" : "negetive");
    return 0;
}