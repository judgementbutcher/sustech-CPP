#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int sum;
    while (n > 0)
    {
        sum += n;
        cout << "n = " << n << " ";
        cout << "sum = " << sum << " ";
    }
    // 这里没有改n的值，这样的话这里是一个死循环
    return 0;
}