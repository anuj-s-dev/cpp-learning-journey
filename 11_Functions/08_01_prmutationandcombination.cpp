// Permutation and Combination.

// Combinations.(nCr=n!/r!*(n-r)!) by normal method.

#include<iostream>
using namespace std;
int main()
{
    int num1, num2 , a = 1, b=1, c=1;
    cout<<"Enter the value of num:- ";
    cin>>num1;
    cout<<"Enter the value of num2:- ";
    cin>>num2;
    for (int i=1; i<=num1;i++)
    {
        a*=i;
    }
    for (int i=1; i<=num2; i++)
    {
        b*=i;
    }
    for (int i=1; i<=num1-num2; i++)
    {
        c*=i;
    }
    cout<<a/(b*c);
    
    
}