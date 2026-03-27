#include<iostream>
using namespace std;

// Function using pointers
// It receives addresses of variables
void add(int *a , int *b){
    
    *a += 5;   // Dereferencing pointer ? modifies original m
    *b *= 3;   // Dereferencing pointer ? modifies original n

    // Print modified values
    cout << *a << endl;
    cout << *b << endl;
}

int main()
{
    int m = 3, n = 4;   // Original variables

    // Passing ADDRESS of variables using &
    add(&m, &n);

    // Now original values are changed
    cout << m << endl;
    cout << n << endl;

    return 0;
}
