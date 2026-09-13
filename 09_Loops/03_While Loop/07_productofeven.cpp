//Question:- WAP to print the product of even number. Number was given by user.

#include<iostream>
using namespace std;
int main()
{
    int num, num1, product=1;
    cout<<"Enter the number:- ";
    cin>>num;
    while(num!=0){
        num1=num%10;
        if(num1%2==0)
        product*=num1;
        num/=10;
    }
    cout<<product;
}