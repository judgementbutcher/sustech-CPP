#include <iostream>
using namespace std;

int main()
{
    int *A = new int[5];
    for (int i = 0; i < 5; i++)
    {
        A[i] = (i + 1) * 5 + 8;
    }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << " ";
    // }
    int *p = A + 4;
    while (p != A - 1)
    {
        cout << *p-- << " ";
    }
    cout << endl;
    return 0;
}