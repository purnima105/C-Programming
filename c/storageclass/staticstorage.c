#include <stdio.h>
void callcount(void);
int main()
{
    callcount();
    callcount();
    callcount();
    return 0;
}
void callcount(void)
{
    static int count=1;
    printf("call no: %d\n",count);
    count++;
}