// 11. Question. Take 3 positive integres input and print the least of them. 

#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    if(a<b && a<c)
    {
        cout<<"a is least value";
    }
    else if(b<c)
    {
        cout<<"b is least value";
    }
    else{
        cout<<"c is the least value";
    }
}