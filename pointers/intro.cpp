#include <iostream>

using namespace std;

int main()
{
    int a;
    int *p;
    p = &a;

    a = 5;

    cout << p << endl;  // This is the address of the variable it is pointing to.
    cout << &a << endl; // This is the address of a.
    cout << &p << endl; // This is the address of p.
    cout << *p << endl; // This is the value of a i.e., the value of the address it (p) is pointing to.
    *p = 8;             // We can change the value of the address it (p) is pointing to. This concept of known as dereferening.
    cout << a << endl;  // We can see the updated value here.
}
