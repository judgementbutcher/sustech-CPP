#include<iostream>
#include"add.h"
using namespace std;


int main()
{
    //this num is out of range
    int num1 = 2147483647;
    int num2 = 1;
    int result = 0;

    result = add(num1,num2);

    cout << "The result is:" << result << endl;
    return 0;
}

