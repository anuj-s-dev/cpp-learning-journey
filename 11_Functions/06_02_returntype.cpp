#include<iostream>
using namespace std;
int sum(int a, int b) 
{
    return a+b;
}
int main()
{
    int e; 
    cout<<"Enter the value of e:- ";
    cin>>e;
    int f;
    cout<<"Enter the value of f:- ";
    cin>>f;
    cout<<sum(e,f); 
}