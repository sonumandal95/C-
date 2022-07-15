// Function that ask user to enter 2 intergers and return sum as integer

#include<iostream>
using namespace std;

int add() {
    int a, b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    return a+b;
}

int main() {
    int sum = add();
    cout<<"Sum: "<<sum;
    return 0;
}