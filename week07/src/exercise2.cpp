#include <iostream>
using namespace std;
void displaySquare(int side = 4, char filledChar = '*');

/*
对于默认初始化参数，我们只能在声明时赋值，在定义时只需要写出变量
同时，缺省参数时只能从前往后缺省
*/

int main()
{
    displaySquare();
    displaySquare(10,'#');
    //只能从前往后省
    displaySquare(4,'&');
    displaySquare(2);
    return 0;
}

void displaySquare(int side, char filledChar)
{
    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
            cout << filledChar;
        cout << "\n";
    }
}