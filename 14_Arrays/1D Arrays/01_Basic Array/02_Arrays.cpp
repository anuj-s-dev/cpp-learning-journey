#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // Declaration

    // Manual Way of taking input.
    
    arr[0] = 9; // Set
    arr[1] = 8;
    arr[2] = 6;
    arr[3] = 4;
    arr[4] = 3;

 // Printing of Array :- Method 2 Using for loop.

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}