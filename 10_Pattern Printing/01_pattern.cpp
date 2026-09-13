// Pattern Printing:- Pattern printing was done by nested loop. Nested Loop means , Loops in side loop is called nested loop.

/*
Question: Print the give pattern:-
*****
*****
*****   SOLID RECTANGLE.
*/


#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows:- ";
    cin>>m;
    cout<<"Enter the number of cols:- ";
    cin>>n;
    for(int i=1; i<=m; i++){  // First Loop Control The number of rows.
        for(int j=1; j<=n; j++){ // Second Loop control the number of coloums. It run until become false.
        cout<<"* ";
    }
    cout<<endl;
}
} 