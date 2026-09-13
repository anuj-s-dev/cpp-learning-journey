// ques:- Calculating the area of the circle.

/*Method 1. Using Normal Method.*/
#include<iostream>
using namespace std;
int main()
{
    float radius;
    cout<<"Enter the radius value:- ";
    cin>>radius;
    float area = 3.14 * radius * radius ;
    cout<<"The area of circle is "<<area;
}

// Method 2:- By importing the math function.

/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float radius;
    cout<<"Enter the value of radius:- ";
    cin>>radius;
    float area = 3.14 * pow(radius, 2); // Here 2 is the power of rdaius.
    
    cout<<"The rdaius of circle is "<<radius<<" "<<"and the area of circle is "<<area;
}*/