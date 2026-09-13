// Question 2:- Take positive integer input and tell if it is divisible by 5 or not.

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    if (number % 5 == 0)
    {
        cout<<"Yes It is divisible by 5.";
    }
    else{
        cout<<"No It is not divisible by 5";
    }
}