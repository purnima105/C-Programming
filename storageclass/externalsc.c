#include <stdio.h>
int b=10;
int main()
{
    int a=5;
    printf("a=%d",a);
    {
        printf("\nb=%d",b);
    }
    extern int b;
    printf("\n from out of block :%d",b);
    return 0;
    }
