// Question 4. Take positive integer input and tell if it is a three digit number or not.

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:- ";
    cin>>num;
    if (num>99 && num<1000)
    {
        cout<<"Yes, It is three digit number.";
    }
    else{
        cout<<"No, It is not a three digit number.";
    }
}