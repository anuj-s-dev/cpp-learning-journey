// Method 2:- Decleration and Initilization Method.

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 1, 5, 6, 3}; // If we declear and initilize in one line then we don't need to give size of an araay.
    for(int i=4; i<5 ; i--){
        cout<<arr[i]<<" "<<endl;
    }
}