// Question 10. Take 3 positive integres input and print the greatest of them. 


#include<iostream>
using namespace std;
int main()
{
int a, b, c;
cout<<"Enter the vakue of a: ";
cin>>a;
cout<<"Enter the value of b: ";
cin>>b;
cout<<"Enter the value of c: ";
cin>>c;
if (a>b && a>c)
{
    cout<<"a is greater.";
}
else if (b>c)
{
    cout<<"b is greater.";
}
else{
    cout<<"c is greater.";
}
}