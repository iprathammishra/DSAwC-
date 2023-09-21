#include <iostream>

using namespace std;

void voidpointer(int *p);

int main()
{
    // 1025 = 00000000 00000000 00000100 00000001
    int a = 1025;
    int *p;
    p = &a;

    cout << "size of the int " << sizeof(int) << endl;
    cout << "address = " << (int)p << " , value = " << *p << endl;
    cout << "address = " << (int)(p + 1) << " , value = " << *(p + 1) << endl;

    char *p0;
    p0 = (char *)p; // typecasting

    cout << "size of the char " << sizeof(char) << endl;
    cout << "address = " << (int)p0 << " , value = " << (int)*p0 << endl;             // value here is 1 because address is pointing to 00000001
    cout << "address = " << (int)(p0 + 1) << " , value = " << (int)*(p0 + 1) << endl; // value is 4 because the address is pointing to 00000100

    voidpointer(p);

    return 0;
}

void voidpointer(int *p)
{
    void *p1;
    p1 = p;
    cout << "Address of void pointer: " << (int)p1; // We can only print the address of p1. We cannot implement pointer arithmetic here. We will see the use cases of void or generic pointer in the upcoming lessons.
}