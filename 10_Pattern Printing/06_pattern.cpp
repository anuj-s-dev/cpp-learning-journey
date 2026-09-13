/* Question:- Print the given pattern:-
AAAA
BBBB
CCCC
DDDD
*/

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<"Enter value of m: ";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<(char)(i+64);
        }
        cout<<endl;
    }
    return 0;
}