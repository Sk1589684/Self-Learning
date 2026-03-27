#include<iostream>   // Header file for input and output
using namespace std; // Allows using cout without writing std::


// Function definition
// This is a normal function (NOT a constructor)
// It takes two parameters a and b (passed by value)
void add(int a , int b)// it is a normal function and not a constructor because it is not in class:
{
    
    a += 5;   // Modifies copy of m (original m is NOT changed)
    b *= 3;   // Modifies copy of n (original n is NOT changed)

    // Print modified values inside function
    cout << a << endl;
    cout << b << endl;
};

int main()
{
    int m = 3, n = 4;   // Declare and initialize variables

    add(m, n);          // Function call
                        // m and n are passed by value (copies are sent)

    // These print original values
    // because function modified only the copies
    cout << m << endl;
    cout << n << endl;

    return 0;           // Indicates successful program execution
}
