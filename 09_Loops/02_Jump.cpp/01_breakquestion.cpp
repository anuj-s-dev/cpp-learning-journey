// Question 11:- WAP to find the highest factor of a number 'n' (other then n itself). Done by opposite loop

#include<iostream>
using namespace std;
int main()
{
    int num, fact;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i=(num-1); i>=1; i-- )
    {
        if (num%i==0)
        {
            fact = i;
            break; // Use when we want get out from loop.
        }
    }
    cout<<fact;
}