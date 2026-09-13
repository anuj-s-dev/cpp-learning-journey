
// Updating the value:-

#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the element of arr:- ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Element of array are: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Update the value at index of 3.

    arr[3] = 25; // Here we update the value at the index value of 3.

    cout << "Updated element of array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}