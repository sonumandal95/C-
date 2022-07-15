// Function that ask user to enter 2 intergers and print sum as integer

#include<iostream>
using namespace std;

void add() {
    int x, y;
    cout<<"Enter 2 numbers"<<endl;
    cin>>x>>y;
    cout<<"Sum: "<<x+y;
}
int main() {
    add();
    return 0;
}
