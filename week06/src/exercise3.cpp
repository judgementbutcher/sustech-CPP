#include <iostream>

#define SIZE 5

void sum(int *, const int *, int);

int main() 
{
    int a[SIZE] = {10,20,30,40,50};
    int b[SIZE] = {1,2,3,4,5};

    std::cout << "Before calling the fuction, the contents of a are:" << std::endl;

    for(int i = 0; i < SIZE; i++)
    std::cout << a[i] << " ";
    // passing arrays to function
    sum(a,b,SIZE);

    std::cout << "\nAfter calling the fuction, the contents of a are:" << std::endl;

    for(int i = 0; i < SIZE; i++)
    std::cout << a[i] << " ";
    std::cout << std::endl;
    return 0;
}

//这里的pa是指向常量的指针，指向的值不可修改
void sum(int *pa, const int *pb, int n)
{
    for(int i = 0; i < n; i++)
    {
        *pa += *pb;
        pa++;
        pb++;
    }
}