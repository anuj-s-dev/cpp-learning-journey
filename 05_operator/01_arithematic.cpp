#include<iostream>
using namespace std;
int main()
{

/*
Arithmetic Operator = +, -, *, /, %.
if we add , sub, multiply, or divide int with int we got only int not float or other data type.

+ = Use for addition.
- = Use for subtration
* = Use for Multiplication
/ = Use for division
% = Use for finding the reminder. (Modulus Operator)

// For Modulus Some imp.
1. a%a = a [If a<b]
2. a%a = 0
3. a%(-b) = a%b
4. (-a)%b = -[a%b]

*/

    int x = 10, y = 3;
    cout<<x+y<<endl; // Addition
    cout<<x-y<<endl; // Subtraction
    cout<<x*y<<endl; // Multiply
    cout<<x/y<<endl; // Divide // Issue
    cout<<x%y<<endl<<endl;

    float a = 10, b = 3;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl; 
    cout<<x%y;
}