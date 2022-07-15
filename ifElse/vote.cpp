// program to check if a person can vote or not.
// A person can only vote if his/her age is 18+

#include<iostream>
#include<string>
using namespace std;

int main() {
    string name;
    int age;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>> age;
    if (age >= 18) cout<<name<<" can vote.";
    else cout<<name<<" can't vote.";
    return 0;
}