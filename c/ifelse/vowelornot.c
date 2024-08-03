// to checck wheather the entered alphabet is vowel or not
#include <stdio.h>
int main()
{
    char n;
    printf("enter a alphabet to be checked:  ");
    scanf("%c",&n);
    if ((n=='a'||n=='e'||n=='i'||n=='o'||n=='u')||(n=='A'||n=='E'||n=='I'||n=='O'||n=='U'))
    {
    printf("the entered charcater is vowel");
    }
    else
    {
        printf("the entered character is not vowel");
    }
    return 0;
}