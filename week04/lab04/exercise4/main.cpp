#include "fib.hpp"
#include <iostream>
using namespace std;

// 这里的fib是非常简陋的fib，因为一是范围小，而是进行了大量的重复计算，但本次作业的重点是makefile，所以就暂时忽略了

int main()
{
    cout << "Please input a positive integer:";
    int inte;
    cin >> inte;
    while (inte <= 0)
    {
        cout << "Please input a positive integer:";
        cin >> inte;
    }

    for (int i = 0; i < inte; i++)
    {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}