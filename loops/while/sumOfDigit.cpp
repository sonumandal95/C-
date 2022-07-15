// Find the sum of a digit,
// for eg, n = 1234, sum will be 1 + 2 + 3 + 4 = 10

#include<iostream>
using namespace std;

int main() {
    int number, remender, sum = 0;
    cout<<"Enter a number: ";
    cin>>number;

    while (number > 0) {
        remender = number % 10;
        sum += remender;
        number /= 10;
    }
    cout<<"Sum of digit: "<<sum;
    return 0;
}