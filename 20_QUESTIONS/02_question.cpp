// Question:- Calculating Simple intrest.
/*
Formula: (p * r * t)/100
P = Principal
r = rate of intrest.
t = time
*/

#include<iostream>
using namespace std;
int main()
{
    float p,r,t;
    cout<<"Enter the value of p:- ";
    cin>>p;
    cout<<"Enter the value of r:- ";
    cin>>r;
    cout<<"Enter the value of t:- ";
    cin>>t;
    float SI = (p*r*t)/100;
    cout<<"The value of SI is "<<SI;
}