// Question 1:- Print n to 1. using function and for loop.

#include<iostream>
using namespace std;
void print(int n)
{
    if (n==0)
    return;
    for(int i = n; i>=1; i--)
    {
        cout<<i<<endl;
    }
}
int main()
{
    int m;
    cin>>m;
    print(m);
}