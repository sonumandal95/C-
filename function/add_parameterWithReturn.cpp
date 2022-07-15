// Function that accept 2 intergers and return sum as integer

#include<iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum: "<<add(a, b);
    return 0;
}