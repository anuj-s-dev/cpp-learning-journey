// We also take input from user for passiingg the value to parameter. 

#include<iostream>
using namespace std;
void sum(int a, int b) // int a and int b  is a "formal parameters" or lets say variable created under sum function. It is a decleration.
{
    cout<<a+b;
    return;
}
int main()
{
   int c;
   cout<<"Enter the value of a:- ";
   cin>>c;
   int d;
   cout<<"Enter the value of d:- ";
   cin>>d;
   sum(c,d);
}