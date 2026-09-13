//  question:- WAP to print the product of the digit of the given number.

#include<iostream>
using namespace std;
int main()
{
    int num, num1, product=1;
    cout<<"Enter the number:- ";
    cin>>num;
    while(num!=0){
        num1=num%10;
        num/=10;
        product*=num1;
    }
    cout<<product;
}