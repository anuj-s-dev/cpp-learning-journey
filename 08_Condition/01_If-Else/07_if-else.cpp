// Question:- Take 3 number input and tell if they can be the side of a triangle. (Properties of triangle is sum of 2 side is greater then 3 side.)


// && and (and) both we can use.
#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout << "Enter the value of side1:- ";
    cin >> side1;
    cout << "Enter the value of side2:- ";
    cin >> side2;
    cout << "Enter the value of side3:- ";
    cin >> side3;
    if ((side1 + side2) > side3 && (side1 + side3) > side2 && (side2 + side3) > side1)
    {
        cout << "Valid Triangle";
    }
    else
    {
        cout<<"INvalid Triangle";
    }
}