#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};

    // Print addresses of array elements
    cout << "Addresses of array elements:\n";
    cout << "&arr[0] = " << &arr[0] << endl;
    cout << "&arr[1] = " << &arr[1] << endl;
    cout << "&arr[2] = " << &arr[2] << endl;

    // Declare pointer
    int *ptr;

    // Store base address of array in pointer
    ptr = arr;   // same as ptr = &arr[0];

    cout << "\nAccessing elements using pointer:\n";

    // Access elements using pointer
    cout << *ptr << endl;        // value at arr[0]
    cout << *(ptr+1)  << endl;  // value at arr[1]
    cout << *(ptr + 2) << endl;  // value at arr[2]
    
    int* p1 = &arr[0];//address using P;
    cout <<p1;

    return 0;
}
