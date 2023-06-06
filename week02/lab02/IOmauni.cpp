#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << 56.8 << endl;
    // 12设置输出的栏宽
    cout.width(12);

    // fill表示位数不足时用什么字符去填
    cout.fill('+');
    cout << 456.77 << endl;

    // 设置浮点数的有效位
    cout.precision(2);
    cout << 123.356 << endl;

    cout.precision(5);
    cout << 3897.678485 << endl;

    return 0;
}