// Conditional Statement:- Use for making condition.
/*
if:- It is used for making our 1st condition.
else:- If (if) condition was wrong then else condition run otherwise not.
*/

// Question 1:- Taking positive integer input and tell if it is even or odd.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:- ";
    cin>>num;
    if (num % 2 == 0)  // Condition
    {
        cout<<"Even Number";
    }
    else
    {
        cout<<"Odd Number";
    }
}