//Question:- WAP to print the sum of digit of given number.

#include<iostream>
using namespace std;
int main()
{
    int num, num1, sum=0;
    cout<<"Enter the value of num:- ";
    cin>>num;
    while(num!=0)
    {
        num1 = num%10;
        num = num/10;
        sum+=num1;
    }
    cout<<sum;
}