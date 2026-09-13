// Built in Library functions for calculating mathmatical operations like:- sqrt(). cbrt(), min(), max(), pow(a,b);

// When we wat to use library function then we have to add one header file "#include<cmath>"then all library function are working. 

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<sqrt(9)<<endl<<endl;  // Library Function:- sqrt = square root; cbrt = cube root.
    cout<<cbrt(1000)<<endl<<endl;
    cout<<min(8,15)<<endl<<endl;
    cout<<max(15,8)<<endl<<endl;
    cout<<pow(2,3);  // 2 ke power 3
}