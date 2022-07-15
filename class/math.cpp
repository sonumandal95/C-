// Write a class which can perform addition, substruction, multiplication, division and moduler using member functions.

#include <iostream>

using namespace std;
class Math
{
public:
    int addition(int a, int b)
    {
        return a + b;
    }

public:
    int substruction(int a, int b)
    {
        return a - b;
    }

public:
    int multiplication(int a, int b)
    {
        return a * b;
    }

public:
    float division(int a, int b)
    {
        return (b == 0) ? 0.0f : (float)a / b;
    }

public:
    int moduler(int a, int b)
    {
        return a % b;
    }
};

int main()
{
    Math math;
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    cout << "Addition: " << math.addition(a, b) << endl;
    cout << "Substruction: " << math.substruction(a, b) << endl;
    cout << "Multiplication: " << math.multiplication(a, b) << endl;
    cout << "Division: " << (float)math.division(a, b) << endl;
    cout << "Moduler: " << math.moduler(a, b) << endl;
    return 0;
}
