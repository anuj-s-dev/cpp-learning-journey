// Taking the input in array.

// In Array we take input and show output using only for loop.


#include<iostream>
using namespace std;
int main()
{
    int arr[5];

    //Taking input using for loop.

    cout<<"Enter element of array:- ";
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array element are:- ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}