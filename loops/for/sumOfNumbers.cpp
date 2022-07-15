// Find the sum of 1 to n number

#include<iostream>
using namespace std;

int main() {
    int n;
    long long int sum = 0;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++) {
        sum+=i;
    }
    cout<<"Sum: "<<sum;
    return 0;
}