#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 4, 5, 8, 1};
    for (int i = 0; i < 5; i++)
    {
        cout << "Address: " << &A[i] << endl;
        cout << "Address: " << A + i << endl; // Recommended.
        cout << "Value: " << A[i] << endl;
        cout << "Value: " << *(A + i) << endl; // Recommended.
    }

    return 0;
}

// Here, if we try to print A it will give us the base address of array A that is the address of value index 0 i.e., address of 2. Then it is pretty straight forward and we can access values and address and do traversal within arrays by de-referencing techniques and pointer arithmetic techniques.