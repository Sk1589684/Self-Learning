#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // Assignment Operators
    cout << "Assignment Operators:" << endl;
    int x = a;       // =
    cout << "x = " << x << endl;

    x += b;          // +=
    cout << "x += b : " << x << endl;

    x -= b;          // -=
    cout << "x -= b : " << x << endl;

    x *= b;          // *=
    cout << "x *= b : " << x << endl;

    x /= b;          // /=
    cout << "x /= b : " << x << endl;

    x %= b;          // %=
    cout << "x %= b : " << x << endl;


    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    if (a > 0 && b > 0)        // AND
        cout << "a and b are positive" << endl;

    if (a > 0 || b < 0)        // OR
        cout << "At least one condition is true" << endl;

    if (!(a < 0))              // NOT
        cout << "a is not negative" << endl;


    // Unary Operators
    cout << "\nUnary Operators:" << endl;
    int y = 5;

    cout << "y = " << y << endl;
    cout << "++y = " << ++y << endl;   // pre increment
    cout << "y++ = " << y++ << endl;   // post increment
    cout << "After y++ : " << y << endl;

    cout << "--y = " << --y << endl;   // pre decrement
    cout << "y-- = " << y-- << endl;   // post decrement
    cout << "After y-- : " << y << endl;


    // Ternary Operator
    cout << "\nTernary Operator:" << endl;
    int max = (a > b) ? a : b;

    cout << "Maximum number is: " << max << endl;

    return 0;
}
