#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float f1 = 1.2f;
    float f2 = f1 * 1e15;
    cout << fixed << setprecision(15) << f1 << endl;
    cout << setprecision(15) << f2 << endl;
    return 0;
}