// Question:- Print sum from 1 to n (Return Type)

//  My logic.

/*
#include <iostream>
using namespace std;
int sum(int n, int m = 0)
{
    if (n == 0)
        return m;
    m += n;
    sum(n - 1,m);
}
int main()
{
    int x;
    cout << "Enter the value of x:- ";
    cin >> x;
    sum(x);
    cout << sum(x);
}
*/

// Sir Logic.

#include <iostream>
using namespace std;
int sum(int n)
{
    if (n==1)
    return 1;
    return n + sum(n-1);
}
int main()
{
    int x;
    cout << "Enter the value of x:- ";
    cin >> x;
    sum(x);
    cout << sum(x);
}