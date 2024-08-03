#include <stdio.h>
int main()
{
    char c1,c2,c3;
    printf("enter the 1st charcter: ");
    c1=getchar();
    printf("\nenter the 2nd charcter: ");
    c2=getch();
    printf("\nenter the 3rd charcter: ");
    c3=getche();
    printf("1st getchar : %c\n 2nd getch: %c\n 3rd getche : %c",c1,c2,c3);
    return 0;
}