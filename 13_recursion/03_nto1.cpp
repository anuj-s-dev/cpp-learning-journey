// Question 1:- Print n to 1. using function and recursion.

#include<iostream>
using namespace std;
void serial(int n)
{
    if (n==0)  //It is a base case. Base case is used to stop infinite loop, or ending the recursion.
    return;
    cout<<n<<endl;
    serial(n-1);  // Function calling itself.
}
int main()
{
    int m;
    cout<<"Enter the value of m:- "; 
    cin>>m;
    serial(m);
}