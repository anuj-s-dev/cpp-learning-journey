// Swaping  of two number in fuction is done by pass by reference. Swaping in fuction is not done by pass by value.
#include<iostream>
using namespace std;
void swap(int& a, int& b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"Enter the value x:- ";
    cin>>x;
    cout<<"Enter the value y:- ";
    cin>>y;
    cout<<"x:- "<<x<<" and "<<"y:- "<<y<<endl<<endl;
    swap(x,y);
    cout<<"x:- "<<x<<" and "<<"y:- "<<y;
}