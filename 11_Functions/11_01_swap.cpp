// Method 1

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value a:- ";
    cin>>a;
    cout<<"Enter the value b:- ";
    cin>>b;
    int temp = a;
    cout<<"a:- "<<a<<" and "<<"b:- "<<b<<endl<<endl;
    a=b;
    b=temp;
    cout<<"a:- "<<a<<" and "<<"b:- "<<b;
}