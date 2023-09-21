#include <iostream>
#include <string.h>

using namespace std;
void print(char *C);

void print(char *C)
{
    int i = 0;
    while (C[i] != '\0') // We can also use *C only and remove i.
    {
        cout << C[i]; // We can use *C only and remove i.
        i++;          // Here we can use C++ to avoid using i.
    }
    cout << endl;
}

int main()
{
    char C[] = "JOHN"; // This is how you use strings and we cannot put C[4] beacuse it it take \0: null character to make it a string.
    print(C);
    return 0;
}