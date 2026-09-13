// Question:- WAP to reverse the digit given by user..

#include<iostream>
using namespace std;
int main()
{
    int num, num1, reverse=0;
    cout<<"Enter the number:- ";
    cin>>num;
    while(num!=0)
    {
        num1 = num%10;
        reverse=reverse*10+num1;
        num/=10;
    }
    cout<<reverse;
}