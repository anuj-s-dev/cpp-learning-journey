// Question 8. Display this GP- 1, 2, 4, 8, 16,....upto 'n' terms.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    int m = 1;
    for (int i=1; i<=n; i++)
    {
        cout<<m<<" ";
        m*=2;
    }
}