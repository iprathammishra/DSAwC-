#include <iostream>
using namespace std;
int SumOfElements(int *A, int size);
void Double(int *A, int s);
int SumOfElements(int *A, int size) // "int *A or int A[]" ..its the same...
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i]; // A[i] is *(A + i)
    }
    return sum;
}
void Double(int *A, int s)
{
    for (int i = 0; i < s; i++)
    {
        *(A + i) = 2 * (*(A + i)); // We can use A[i] = 2*A[i] its the same thing.
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumOfElements(A, size); // A can be used for &A[0]
    cout << total << endl;

    int s = size;
    Double(A, s);

    for (int i = 0; i < s; i++)
    {
        cout << *(A + i) << " "; // We can use A[i] to print the values.
    }
    return 0;
}