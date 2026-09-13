// ASCII Value:- A number which are providing to every character. Typecasting:- Char to int is called Ascii value. x = (int)y y is char converted to int ans is called ascii value.

/*
How to find the ascii value? 
By using typecasting.
*/

// Char to int = Ascii Value. (char have same own int value.)

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the char:- ";
    cin>>ch;
    cout<<"The given character is "<<ch<<endl<<endl;
    cout<<(int)ch<<endl<<endl; // Typecasting to know to the ascii value of ch.

    cout<<"The Ascii value of "<<ch<<" "<<"is"<<" "<<(int)ch;
}