#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str,20,stdin);
    printf("You entered:");
    puts(str);

    return 0;
}