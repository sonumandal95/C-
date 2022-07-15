// find febonacci series for a=0 and b=1; a and b will be the first number to print

#include <iostream>
using namespace std;

int main()
{
    long int a = 0, b = 1, c = 0, n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Series" << endl;
    if (n <= 0)
        cout << "None";
    else if (n == 1)
        cout << "0";
    else if (n == 2)
        cout <<"0"<<endl<<"1";
    else
    {
        cout <<"0"<<endl<<"1"<<endl;
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }
    return 0;
}