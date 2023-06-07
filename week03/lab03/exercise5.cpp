#include <iostream>
using namespace std;
int main()
{
    // 这里的n和fa都没有初始化，因此它们的值将会是随机的
    int n, fa;
    do
    {
        fa *= n;
        n++;
    } while (n <= 10);
    cout << "fa = " << fa << endl;
    return 0;
}