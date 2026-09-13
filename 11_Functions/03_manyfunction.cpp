// Creating many function In one go. We make unlimited number of function. 

#include<iostream>
using namespace std;
void usa()
{
    cout<<"Hy are you from usa."<<endl<<endl;
    return;
}
void india()
{
    cout<<"Hy are you from India"<<endl<<endl;
    return;
}
 
/* Main():- It cannot be called more than once.

return:- it is a keyword, jisse function khatam ho jata hai, or return ke niche kitne bhi line honge same function main vo print nhi hoga. Kind of like break;

Before function name we write return type. */

void south()
{
    cout<<"Are you from south."<<endl;
    return; // return ke niche kitne bhi line honge same function main vo print nhi hoga. Kind of like break;
    cout<<"My name is anuj";
    cout<<"I am a very big cricketer fan";
}
int main()
{
    usa();
    india();
    south();
}

/* Void mai return likhna jaruri nhi h but ek best practice h jisse code accha lagta h.

But hame void ke alvahar mai return likhna jaruri hota h.*/