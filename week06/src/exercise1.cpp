#include <iostream>
using namespace std;
#define SIZE 5

/* 
在这个程序中，首先是函数的定义在main函数下面，看不到，可以提前声明
同时，在用到了指针的地方没有检验指针是否为空，不够健壮。
*/

int sum(const int *pArray, int n)
{
    if(pArray == nullptr)
    {
        cout << "数组为空" << endl;
        return 0;
    }
    int s = 0;
    for(int i = 0; i < n; i++)
    s += pArray[i];
    return s;
}

int main()
{
    int const *pa = new int[SIZE]{3,5,8,2,6};
    int total = sum(pa,SIZE);
    cout << "sum = " << total << endl;
    return 0;
}

