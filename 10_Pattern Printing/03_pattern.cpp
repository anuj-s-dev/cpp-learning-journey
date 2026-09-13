/*Question: Print the give pattern:-
1234
1234
1234
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
            cout<<j<<" ";
        }
        cout<<endl;
    }
}