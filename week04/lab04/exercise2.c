#include <stdio.h>

//都使用同一块空间，一共四个字节
union data{
    int n;
    char ch;
    short m;
};


//according to the outcome of my program
//it turns out my computer is little endian.actually, I have searched that basically x86 is little endian.

int main()
{
    union data a;
    printf("%ld, %ld\n", sizeof(a), sizeof(union data) );
    a.n = 0x40;
    //%X是输出十六进制整数,%h限定输出为16位
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.ch = '9';
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.m = 0x2059;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    a.n = 0x3E25AD54;
    printf("%X, %c, %hX\n", a.n, a.ch, a.m);
    return 0;
}