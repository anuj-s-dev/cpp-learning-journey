// Calling of new function in another new function.

#include<iostream>
using namespace std;

void usa()
{
    cout<<"Hy are you from usa."<<endl<<endl;
    return;
}
void india()
{
    cout<<"Hy are you from india."<<endl; 

    // We also call usa function in this new function india.

    usa();
    
    return;
}
int main()
{
    india(); // It printed the value of india function and usa both because usa was calling under india function.
}