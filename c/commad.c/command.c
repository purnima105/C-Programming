#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    int n3 = atoi(argv[3]);
    printf("\n The ouutput of : %s",argv[0]);
    printf("\n The sum is : %d",n1+n2+n3);
    return 0;
}