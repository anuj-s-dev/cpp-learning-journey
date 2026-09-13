// Swaping of number by using pointers. by pass by reference = address involve. 

#include<iostream>
using namespace std;
void swap(int* a ,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
int x,y;
cout<<"Enter the value of x:- ";
cin>>x;
cout<<"Enter the value of y:- ";
cin>>y;
cout<<"x:- "<<x<<" "<<"y:- "<<y<<endl;
swap(&x, &y);
// cout<<"x:- "<<x<<" "<<"y:- "<<y;
}