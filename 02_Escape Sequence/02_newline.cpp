#include<iostream>
using namespace std;
int main()
{

// Both are printed in different line because we use (\n).

    cout<<"Hello World!\n";
    cout<<"Shri Krishna"<<endl<<endl;

// or we can write like.

    cout<<"Hello World!";
    cout<<"\n"; // If we are are write like this then we use double quote for writing \n, but not in endl. If we provide single \n the we got new line, but when we provide double \n then we got extra space new line for writting anything.
    cout<<"Shri Krishna"<<endl<<endl; 

    cout<<"Hello World!\n\n";
    cout<<"Shri Krishna";
}