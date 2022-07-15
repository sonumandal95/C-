/* Accept a number and print the following

1. If number is divided by 5 print Fizz
2. If number is divided by 3 print Buzz
3. If the number is divided by 5 and 3 print FizzBuzz
4. otherwise print buzzFizz */
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter a numbers"<<endl;
    cin>>a;
    if (a%5 == 0 and a%3==0) cout<<"FizzBuzz";
    else if (a%5 == 0) cout<<"Fizz";
    else if (a%3 == 0) cout<<"Buzz";
    else cout<<"BuzzFizz";
    return 0;
}