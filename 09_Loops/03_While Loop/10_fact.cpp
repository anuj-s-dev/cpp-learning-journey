// Using while loop.

#include<iostream>
using namespace std;
int main()
{
    int num, fact=1;
    cout<<"Enter the number:- ";
    cin>>num;
    while(num>0){
        fact*=num;
        num--;
    }
    cout<<fact;
}