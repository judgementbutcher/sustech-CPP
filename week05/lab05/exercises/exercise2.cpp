#include <stdio.h>

/*
这里只说一点&a + 1,&a是数组的首地址，所以&a + 1这里的1代表的偏移量是以数组的大小为单位的，所以就会得到数组的尾后地址
*/
int main()
{
    int a[] = {2, 4, 6, 8, 10}, y = 1, *p;
    p = &a[1];
    printf("a = %p\np = %p\n", a, p);

    for (int i = 0; i < 3; i++)
        y += *(p + i);
    printf("y = %d\n\n", y);

    int b[5] = {1, 2, 3, 4, 5};

    int *ptr = (int *)(&b + 1);
    printf("%p\n", &b + 1);

    printf("b = %p\nb+4 = %p\nptr = %p\n", b, b + 4, ptr);
    printf("%d,%d\n", *(b + 1), *(ptr - 1));
    return 0;
}