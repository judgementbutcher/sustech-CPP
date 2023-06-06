#include <iostream>
using namespace std;

int main()
{
    int num_int1 = 0x7ABCDEF0;
    float float_num1 = num_int1;
    int num2 = (int)float_num1;

    cout << num_int1 << endl;
    cout << float_num1 << endl;
    cout << num2 << endl;
    return 0;
}