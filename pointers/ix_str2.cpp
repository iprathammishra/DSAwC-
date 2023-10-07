#include <iostream>
#include <string.h>
using namespace std;
void print(char *C);
void print(const char *C) // Now we can not modify C.
{
    // C[0] = 'A';
    while (*C != '\0')
    {
        cout << *C;
        C++;
    }
    cout << endl;
}
int main()
{
    char C[] = "JOHN";
    print(C);
    return 0;
}