// Updating the value using pointer.

#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int* ptr = &x;  
    cout<<x<<endl;
    cout<<*ptr<<endl;
    *ptr = 23;  // x became 23.
    cout<<x<<endl;
}