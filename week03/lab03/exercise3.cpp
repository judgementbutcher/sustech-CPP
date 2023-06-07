#include <iostream>
using namespace std;

/*
size_t是一个无符号的整数，这里当n等于0时会进入循环，那么之后再减1，n会变为最大的整数，所以这个循环是个死循环
*/

int main()
{
    for (size_t n = 2; n >= 0; n--)
    {
        cout << "n=" << n << " ";
    }
    return 0;
}