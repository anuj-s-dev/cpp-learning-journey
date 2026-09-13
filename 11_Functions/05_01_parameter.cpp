/*
Lets Understand what is parameter. 

Parameter:- Means that a variable that was created under function. like take a example:- greet() greet is our function then we create a variable in greet function , greet(int a, int b) int a and int b is variable that was created under greet function that variable is caleed parameters. */

#include<iostream>
using namespace std;
void sum(int a, int b) // int a and int b  is a "formal parameters" or lets say variable created under sum function. It is a decleration.
{
    cout<<a+b;
}
int main()
{
    sum(9,90); // means that int a = 9 and int b =  90. 9, 90 is actual parameter. 
}

// When we directly give the values to FORMAL PARAMETER OR PARAMETER that is called  "PASS BY VALUE"