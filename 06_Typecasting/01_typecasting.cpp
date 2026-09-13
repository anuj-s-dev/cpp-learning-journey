/* Type casting is use when we want to convert one data type to another. */

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    float y = (float)x; // (float)x:- Type Casting, x was in integer but now it convert to float by this method.
    
    cout<<y/2;
}