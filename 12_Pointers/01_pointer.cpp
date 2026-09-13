// Pointers:- It store the address of another variable.

// If I want to store the address of another variable then we use pointer. It is denoted by *(name of var).

// By using pointer we can access the value of the variable whose address is in that pointer using dereference/*operator.

#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    int* y = &x;  // Or we write like (int* p; p = &x;)
    cout<<&x<<endl;  // It print the address of the variable x.
    cout<<y<<endl;   // It print the address of the variable x.
    cout<<x<<endl;  // It print the value of x.
    cout<<*y<<endl; // It also print the value of x.
    cout<<&y<<endl; // It print the address of pointer y.
}