// Check if a number is even or odd

#include<iostream>
using namespace std;

int main() {
    int number; 
    cout<<"Enter a number: "<<endl;
    cin>>number;
    cout<<number<<" is "<<(number%2 == 0 ? "even" : "odd") ;
    return 0;
}