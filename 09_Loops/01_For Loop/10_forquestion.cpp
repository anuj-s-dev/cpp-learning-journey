// Question 8. Display this GP- 3, 12, 48,....upto 'n' terms.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    int m = 3;
    for (int i=1; i<=n; i++)
    {
        cout<<m<<" ";
        m *= 4;
    }
}