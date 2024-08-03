#include <stdio.h>
int a=10;
int main()
{
    int a=5;
    printf("%d",a);
    {
        extern int a;
        printf("external a :%d",a);
    }
    printf("\n local a=%d",a);
    return 0;
}