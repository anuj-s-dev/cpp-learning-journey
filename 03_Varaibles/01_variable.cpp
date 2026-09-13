/*
Naming Rules for Variable decleration.
1. Variable name can contain letters, digits, and underscore (_).
Example: student_name 
         student2_name Both are correct.

2. Variable name cannot start with a digit.
❌ 1student
✅ student1

3. Variable name cannot contain spaces.
❌ student name
✅ student_name

4. Special symbols are not allowed except underscore (_).
❌ student-name
❌ student@name

5. C++ keywords cannot be used as variable names.
❌ int, float, class, return
Example: int class; ❌

6. C++ variable names are case-sensitive.
age, Age, and AGE are different variables.

7. Variable name should be meaningful and descriptive.
✅ studentAge
❌ x
Variable name can be of any reasonable length, but it should be easy to understand.
*/


#include <iostream>
using namespace std;
int main()
{

    // Method 1. Varaiable Decleration with assigning the values to them.

    int x; // Here x is variable
    x = 1;
    cout << x << "\n"; // or 2nd method is
    // cout<<x<<endl;

    int y; // Here y is variable
    y = 2;
    cout << y << endl
         << endl;

    // Method 2. Varaible was decleard in same line.

    int a, b;
    a = 3;
    b = 4;
    cout << a;
    cout << endl;
    cout << b << "\n\n"; // 2nd method for writing samething in one line.
    // cout<<a<<endl<<b;

    // Method 3. Varaibles decleration in one line with assign the values.

    int f = 7;
    int g = 8;
    cout << f << endl
         << g<<endl<<endl;

    // Method 4. Varaible decleration with initilization .

    int c = 5, d = 6;
    cout << c << endl
         << d << endl
         << endl;

}