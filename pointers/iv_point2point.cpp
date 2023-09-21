#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    cout << (int)*p << endl;
    cout << (int)*q << endl;
    cout << (int)*(*q) << endl;
    cout << (int)*(*r) << endl;
    cout << (int)*(*(*r)) << endl;

    ***r = 10;
    cout << x << endl;
    **q = *p + 2;
    cout << x << endl;
    return 0;
}