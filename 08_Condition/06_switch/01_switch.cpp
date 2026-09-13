/*Question 1. Write a program to create a calculator that perform basic arithmetic operators(add, subtract, multiply an divide) using switch case. The calculator sholud input two numbers and an operator from user.

switch (integer expression){
case constant 1:
do this;
case constant 2:
do this;
case constant 3:
do this;
case constant 4:
do this;}*/ 

#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the value num1: ";
    cin>>num1;
    char op;
    cout<<"Enter the op: ";
    cin>>op;
    cout<<"Enter the value num2: ";
    cin>>num2;
    switch (op)
    {
        case '+':
        cout<<num1+num2;
        break; // Used to stop current itteration.

        case '-':
        cout<<num1-num2;
        break;

        case '*':
        cout<<num1-num2;
        break;

        case '/':
        cout<<num2/num1;
        break;

        case '%':
        cout<<num2%num1;
    }
}
