#include <stdio.h>
int main()
{
    int a=5,*p=&a;
    printf("%u",*p);
     printf("%u",p);
      printf("%u",&a);

return 0;
}