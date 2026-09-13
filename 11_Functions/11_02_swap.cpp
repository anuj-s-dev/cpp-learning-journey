// METHOD 2: Without using extra variable. 

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value x:- ";
    cin>>x;
    cout<<"Enter the value y:- ";
    cin>>y;
    cout<<"x:- "<<x<<" and "<<"y:- "<<y<<endl<<endl;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"x:- "<<x<<" and "<<"y:- "<<y<<endl<<endl;
}