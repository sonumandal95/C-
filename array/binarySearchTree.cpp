// algo for binary search tree
#include <iostream>
#define LENGTH 10
using namespace std;
class Tree
{
public:
    // int arr[10] = {91, 7, 23, 89, 64, 93, 12, 69, 56};
    int arr[LENGTH];
public:
    int search(int number, int ar[LENGTH])
    {
        for (int i = 0; i < LENGTH; i++)
        {
           this->arr[i] = ar[i];
        }
        return binarySearch(number, 0, LENGTH);
    }

private:
    int binarySearch(int number, int start, int end)
    {
        int mid = (start + end) / 2;
        // cout<<"Mid: "<<mid;
        if (start == end && this->arr[mid]!=number) return -1;
        if (this->arr[mid] == number)
            return mid;
        else if (this->arr[mid] > number)
            binarySearch(number, 0, mid);
        else
            binarySearch(number, mid, end);
    }
};

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout << "Enter 10 array elements in acending order" << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> arr[i];
    // }
    int number;
    cout << "Enter search number: ";
    cin >> number;
    Tree t;
    int found = t.search(number, arr);
    if (found != -1)
        cout << "Found number: " << found;
    else
        cout << "Not found";
    return 0;
}
