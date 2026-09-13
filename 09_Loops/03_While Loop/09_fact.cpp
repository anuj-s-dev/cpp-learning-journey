// Question:- Print the factorial of a given number n.

// Using For loop
#include<iostream>
using namespace std;
int main()
{
    int num, fact=1;
    cout<<"Enter the number:- ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        fact*=i;
    }
    cout<<fact;
}