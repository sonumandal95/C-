// Function that accept 2 intergers and print sum

#include<iostream>
using namespace std;

void add(int x, int y) {
    cout<<"Sum: "<<x+y;
}

int main() {
    int a, b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    add(a,b);
    return 0;
}