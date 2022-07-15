// print the below pattern for n number of *

// for eg if, n = 5
/*

*
**
***
****
*****

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout<< "******** Pattern ********"<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
