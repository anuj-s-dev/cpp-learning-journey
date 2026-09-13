// Question 2:- Print 1 to n. Without extra parameter

#include<iostream>
using namespace std;
void seq(int x)
{
    if(x==0)  // Base case.
    return;
    seq(x-1);  // call
    cout<<x<<endl;  // Work
}
int main()
{
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    seq(n);
}

// If we do after call then everything going in reverse.