// Display this AP - 4, 7, 10, 13, 16.. upto n terms.
/* An = a + (n-1)d*/

#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=4; i<=(3*n)+1; i+=3)
    {
        cout<<i<<" ";
    }
}

// 2nd Method.  BEST METHOD.

/*

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;
    int a = 4;
    for(int i = 1; i<=n; i++)
    {
        cout<<a<<" ";
        a+=3;
    }
}

*/

