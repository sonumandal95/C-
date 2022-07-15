// Find if a person can vote or not

#include<iostream>
using namespace std;

int main() {
    string name;
    int age;
    cout<<"Enter name and age: ";
    cin>>name>>age;
    cout<<name<<(age>=18 ? " can vote." : " can't vote.");
    return 0;
}