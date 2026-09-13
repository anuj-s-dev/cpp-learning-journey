// Question:- Calculate the sum of all the element in the given array.

#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the size of an arrays:- ";
    cin>>n;
    int arr[n], sum=0;
    cout<<"Enter the element of an arrays:- ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        // sum+=arr[i];
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    cout<<"The sum arrays element are: "<<sum;
}