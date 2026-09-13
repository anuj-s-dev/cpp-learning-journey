//Question:- WAP to print the sum of even number from given number. Number was given by user.

#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the value of num:- ";
    cin>>num;
    while(num!=0){
        int num1 = num%10;
        if(num1%2==0)
        {
            sum+=num1;
        }
        num/=10;
    }
    cout<<sum;
}