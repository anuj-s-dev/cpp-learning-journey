// Question 11:- WAP to find the highest factor of a number 'n' (other then n itself).

#include<iostream>
using namespace std;
int main()
{
    int num, fact;
    cout<<"Enter the number:- ";
    cin>>num;
    for (int i=1; i<num; i++)
    {
        if (num%i==0)
        {
            fact = i;
        }
    }
    cout<<fact;
}  // This logic is done from front side. another logic is also done in jump.cpp form back side using break .