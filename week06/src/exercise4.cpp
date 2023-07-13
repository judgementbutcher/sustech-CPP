#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1,b = 2;
    cout << "before: " << a << " " << b << endl;
    swap(a,b);
    cout << "After:" << a << " " << b << endl;
    return 0;
}