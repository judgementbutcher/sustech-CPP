#include <iostream>
using namespace std;

// sizeof是一个操作符而不是一个函数

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(size_t) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;
    cout << endl;
    return 0;
}