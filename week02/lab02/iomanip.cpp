#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << 56.8 << setw(12) << setfill('#') << 456.77 << endl;

    cout << left;
    cout << setw(12) << setprecision(2) << 123.356 << endl;
    cout << setw(12) << setprecision(5) << 3897.6784385 << endl;

    cout << right;
    cout << setw(12) << setfill(' ') << 123.356 << endl;
    cout << setw(12) << setfill(' ') << 3897.6784385 << endl;

    cout.unsetf(ios_base::fixed);
    cout << 56.8 << setw(12) << setfill('$') << 456.77 << endl;

    return 0;
}