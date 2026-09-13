/*
Char have some own int value then value also have some own char values.
*/

// int to char by using type casting

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x:- ";
    cin>>x;

    cout<<(char)x<<endl<<endl; // Ascii value of x. By using type casting int to char.

    cout<<"The Ascii value of "<<x<<" "<<"is"<<" "<<char(x);
}