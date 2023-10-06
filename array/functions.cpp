#include <iostream>
#include "functions.h"
using namespace std;
void OneDimensionalArray()
{
    int arr[50], n, idx;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    for (idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    cout << "Array elements are: " << endl;
    for (idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
}

void TwoDimensionalArray()
{
    int arr[3][2];
    cout << "Enter the elements of array: " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cin >> arr[row][col];
        }
    }

    cout << "Elements in the array are: \n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << arr[row][col] << " ";
        }
    }
}
