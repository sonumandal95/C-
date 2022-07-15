// Write a program to accept your name and reverse it

#include<iostream>
using namespace std;

int main() {
    string name;
    string reverseName;
    cout<<"Enter your name: ";
    cin>>name;
    for (int i=name.length(); i>= 0; i--) {
        reverseName += name[i];
    }
    cout<<"Reverse name: "<<reverseName;
    return 0;
}