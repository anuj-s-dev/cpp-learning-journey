/*Question: Print the give pattern:-
1111
2222
3333
4444
 */

#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the value of rows:- ";
    cin>>m;
    int n;
    cout<<"Enter the value of cols:- ";
    cin>>n;
    for(int i=1;i<=m; i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<i<<" "; // We print i because i was not changing.
        }
        cout<<endl;
    }
}