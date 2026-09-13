// Question 12. Take 3 positive integer input and print the greatest of them.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is the greatest.";
        }
        else
        {
            cout << "c is greater";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is greatest.";
        }
        else
        {
            cout << " c is greatest.";
        }
    }
}