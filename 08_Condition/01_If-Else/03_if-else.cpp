// Question3:- Taking integer input and print the absolute value of that integer.(Absolute means when we enter +ve then output come +ve but when we enter -ve then also out become +ve)

#include<iostream>
using namespace std;
int main()
{
    int num; 
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=0)
    {
        cout<<num;
    }
    else
    {
        cout<<-num;
    }
}