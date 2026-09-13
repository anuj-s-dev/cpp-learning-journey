/* Ternary Operator is the form of conditional statement (expression 1 ? expression2: expresion3;).
expression 1 = Condition.
expresion 2 = If condition
expression 3 = else condition*/

// Question 1. Find even and odd.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the value of num: ";
    cin>>num;
    (num % 2 == 0)? cout<<"Even Number": cout<<"Odd Number";

}