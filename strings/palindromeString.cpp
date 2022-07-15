// Check if a string is palindrome or not.
// A string is palindrome when reverse of the string same as actual string.
// eg, mom, dad etc.

#include <iostream>
using namespace std;
int main()
{
    string str, palindromeString;
    bool isPalindrome = true;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = str.length(); i >= 0; i--)
    {
        palindromeString += str[i];
    }
    cout<<"Reverse: "<<palindromeString<<endl;
    for (int i = 0, j = palindromeString.length() - 1; i < palindromeString.length(); i++, j--) {
        if (str[i] != palindromeString[j]) {
            isPalindrome = false;
            break;
        }
    }
    cout<<(isPalindrome ? "Palindrome string" : "Not a palindrome string");
    return 0;
}