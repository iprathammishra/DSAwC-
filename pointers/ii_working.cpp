#include <iostream>
using namespace std;
int main()
{
    // Pointer Arithmetic

    int a = 10;
    int *p;
    p = &a;

    cout << (int)p << endl;
    cout << "Size of integer is " << sizeof(int) << endl;
    cout << "Arithmetic addition of a pointer: " << (int)(p + 2) << endl; // Addding 1 to the pointer doesn't mean it will increase the address by 1. Here, the pointer datatype is (int) so if p at first contain address value of 2003, it will after the arithmetic addition will contain value 2007 i.e., because of the size (int) datatype takes.
    return 0;
}

// Adding more values like 2, 3, or 5 ... n to the pointer variable will increase the address value with 4*n.