#include <iostream>
using namespace std;

/*
首先分析四组sizeof的结果，指针类型永远是八个字节，所以第二列都是8，前面一列是各元素类型的字节数大小
再看接下来的三行，首先我们需要明确，指针本身存储的是一个地址，而指针本身还是个变量，作为变量也有一个地址，因此
首先打印指针变量的地址，再打印指针存储（指向）的地址。最后打印出指针所指对象的值
再看后面两行，指针是个变量，msg和cpoy指向同一片地址，所以解引用和指向的地址是相同的，但本身是两个变量，所以指针的地址不一样。
*/

int main()
{
    char *pc, cc = 'A';
    int *pi, ii = 10;
    float *pf, ff = 23.4f;
    double *pd, dd = 123.78;
    pc = &cc;
    pi = &ii;
    pf = &ff;
    pd = &dd;
    cout << "sizeof(cc) = " << sizeof(cc) << ", sizeof(pc) = " << sizeof(pc) << endl;
    cout << "sizeof(ii) = " << sizeof(ii) << ", sizeof(pi) = " << sizeof(pi) << endl;
    cout << "sizeof(ff) = " << sizeof(ff) << ", sizeof(pf) = " << sizeof(pf) << endl;
    cout << "sizeof(dd) = " << sizeof(dd) << ", sizeof(pd) = " << sizeof(pd) << endl;
    cout << "&pc = " << &pc << ", pc = " << static_cast<void *>(pc) << ", *pc = " << *pc << endl;
    cout << "&pi = " << &pi << ", pi = " << pi << ", *pi = " << *pi << endl;
    cout << "&pf = " << &pf << ", pf = " << pf << ", *pf = " << *pf << endl;
    cout << "&pd = " << &pd << ", pd = " << pd << ", *pd = " << *pd << endl;
    const char *msg = "C/C++ programming is fun.";
    const char *copy;
    copy = msg;
    cout << "msg = " << msg << ",its address is: " << (void *)msg << ", &msg = " << &msg << endl;
    cout << "copy= " << copy << ",its address is: " << (void *)copy << ", &copy= " << &copy << endl;
    return 0;
}