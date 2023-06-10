#include<stdio.h>
#include<stdlib.h>

//看来现在的系统都有做内存的优化，当申请的内存过大时直接就进行了压缩，导致能够正常退出程序


int main()
{
    int *p = NULL;
    for (int i = 0; i < 1024; i++)
    {
        p = (int*)malloc(1024 * 1024 * 1024);
    }
    printf("end\n");
    return 0;
}