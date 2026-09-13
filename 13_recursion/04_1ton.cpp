// Question 2:- Print 1 to n. With extra parameter

#include<iostream>
using namespace std;
void seq(int x, int n)
{
    if(x>n)  // Base case.
    return;
    cout<<x<<endl;
    seq(x+1,n);  // We have to pass 2 argunment.
}
int main()
{
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    seq(1,n);
}