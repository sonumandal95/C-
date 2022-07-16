#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v = {{1, 2, 3, 4}, {1, 2, 3}, {5, 4, 3, 2, 1}, {6, 5, 4, 7, 8, 9, 0, 90}};

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.at(i).size(); j++)
        {
            cout << v.at(i).at(j) << " ";
        }
        cout << endl;
    }
    return 0;
}