//  Scope of variable:- kisi var ki aukat.

#include<iostream>
using  namespace std;
int main()
{
    for(int i=1; i<=5; i++)
    {
        cout<<i<<endl; // This  i was printed only under for loop. because hm isko for loop ke under hi declear kiye h to iski aukat itni hi h.
    }
}