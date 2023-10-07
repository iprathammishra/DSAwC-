#include <iostream>
using namespace std;
void Increment(int *p);
void Increment(int *p) // Here, we need to pass the parameter as the pointer variable so that we can perform de-referencing.
{
    *p = (*p) + 1; // Here, I am de-referencing the pointer variable.
}
int main()
{
    int a;
    a = 10;
    Increment(&a); // Here, we have to give the address of the variable.
    cout << a;
    return 0;
}