#include <stdio.h>
enum day{sun=1,mon,tue,wed,thu,fri,sat};
int main()
{
   int i;
   for( i=sun;i<=sat;i++)
   {
    printf("week day is %d\n",i);
   }
    return 0;
}