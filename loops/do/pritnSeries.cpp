// Print all the number till n number
// Note: Print 1 even if user enter 0 for n

#include<iostream>
using namespace std;
int main() {
    int n, i = 1;
    cout<<"Enter n: "<<endl;
    cin>>n;
     cout<<"Series"<<endl;
    do {
        cout<<i<<endl;
        i++;
    } while (i<=n);
    return 0;
}