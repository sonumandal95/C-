// Sum of array elements

#include <iostream>
using namespace std;

class ArrayClass
{
public:
    int arr[5] = {1, 2, 3, 4, 5};

public:
    int sumOfArray()
    {
        int sum = 0;
        int length = sizeof(this->arr) / sizeof(this->arr[0]);
        for (int i = 0; i < length; i++)
        {
            sum += this->arr[i];
        }
        return sum;
    }

public:
    void printArray()
    {
        int length = sizeof(this->arr) / sizeof(this->arr[0]);
        for (int i = 0; i < length; i++)
        {
            cout<<this->arr[i]<<" ";
        }
        cout<<endl;
    }

public:
    int setArray(int *newArr)
    {
        int length = sizeof(this->arr) / sizeof(this->arr[0]);
        for (int i = 0; i < length; i++)
        {
            this->arr[i] = newArr[i];
        }
    }
};

int main()
{
    ArrayClass object;
    cout << "Sum of element: " << object.sumOfArray() << endl;
    cout << "Default Array of element: ";
    object.printArray();
    int arr[5] = {7, 8, 9, 10, 11};
    object.setArray(arr);
    cout << "Sum of element: " << object.sumOfArray() << endl;
    cout << "Changed Array of element: ";
    object.printArray();
    return 0;
}