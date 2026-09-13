#include<iostream>
using namespace std;
int main()
{

// Both are printed in different line because we use (endl).

    cout<<"Hello World!"<<endl;
    cout<<"Shri Krishna"<<endl<<endl;

// or we can write like.

    cout<<"Hello World!";
    cout<<endl; // If we are are write like this then double quote are not required for writing endl, like \n.
    cout<<"Shri Krishna"<<endl<<endl;

// If we use single endl in any way then we got only new line for writing another thing, but when we write double endl we got new line and one extra space newline as well.

// There is no need to write cout again and again.

    cout<<"Hello World!"<<endl<<"Shri Krishna";
}