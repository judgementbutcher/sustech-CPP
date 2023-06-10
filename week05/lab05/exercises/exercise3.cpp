#include <iostream>
using namespace std;

/*
*p = *(a+1)这一步p的偏移量是a的列数，也就是4，此时p指向9，之后加3，移动到15，所以先输出15，这里又加了1，所以下一次输出17
这里pc一开始指向W，转成long*之后，q++，这个偏移量是八个字节，所以此时指向了t,然后再转成char*，输出时会从to开始输出
最后那个m一开始是四个字节，转成short*之后剩2个字节，所以此时只能存下最后面的两个字节，也就是16位，恰好是af67
*/

int main()
{
    int a[][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int *p = *(a + 1);
    p += 3;
    cout << "*p++ = " << *p++ << ",*p = " << *p << endl;
    const char *pc = "Welcome to programming.", *r;
    long *q = (long *)pc;
    q++;
    r = (char *)q;
    cout << r << endl;
    unsigned int m = 0x3E56AF67;
    unsigned short *pm = (unsigned short *)&m;
    cout << "*pm = " << hex << *pm << endl;
    return 0;
}