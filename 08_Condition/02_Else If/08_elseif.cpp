// Question 1. If cost price and selling price of an item is input through the keybord, write a program to determine whether the seller has made profit or incurrred loss or no profit no loss. Also determine how much profit he made or loss he incurred.

#include <iostream>
using namespace std;
int main()
{
    float cp, sp, profit, loss;
    cout << "Enter the cost price:- ";
    cin >> cp;
    cout << "\n Enter the selling price:- ";
    cin >> sp;
    if (sp > cp)
    {
        cout << "Yes, It make profit."<<endl;
        profit = sp - cp;
        cout << "Seller make a profit of " << profit;
    }
    else if (cp > sp)  // We make many number of times else if.
    {
        cout <<"Seller was in loss."<<endl;
        loss = cp - sp;
        cout<<"Seller was in loss of "<<loss;
    }
    else
    {
        cout << "Seller made no profit no loss";
    }
}