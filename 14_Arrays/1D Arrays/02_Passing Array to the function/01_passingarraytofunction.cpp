/*      Passing Arrays to the function.         */

// By defalut name of arrays is the address itself that's why we not use (&) this operator when we pass the array to function. Array can not be pass by pass by value it always pass by pass by reference.


#include<iostream>
using namespace std;
void change(int arr[]) // Reciveing an array. 
{
    arr[2] = 8;
}
int main()
{
    int arr[5];
    // For input.
    cout<<"Enter the element of arrays: "<<endl;
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }

    // For output.
    cout<<"The element of araays are: "<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Updated value:
    cout<<"Updated element of arrays are: "<<endl;
    change(arr); // Arrays is pass by its name only and recived by its name and one square bracket. but do not size of array in square beacket. 
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// When we pass an arrays to function then it is not act like int value of variable or we do not use (&) operator for passing the address or givinge the reference. It automatically act like reference operator. 

// Jo array ham function mai pass karte hai uske andar ham kuch bhi change update karenge vo hmesa original arrays mai change hoga kyu ki array ham pass karte h or vo jis function ke array mai pass karte h vo array or actual array hamesa same hota hai.