#include <iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};

    cout << &a << endl;
    cout << a << endl;
    cout << &a[0] << endl;
    cout << *(a + 1) << endl;
    cout << &a + 1 << endl;
    cout << (int *)(&a + 1) << endl;

    return 0;
}