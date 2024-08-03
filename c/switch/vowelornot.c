// to checck wheather the entered alphabet is vowel or not
#include <stdio.h>
int main()
{
    char n;
    printf("enter a alphabet to be checked:  ");
    scanf("%c",&n);

    switch(n)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
    printf("the entered character is vowel");
   break;
   default:
        printf("the entered character is not vowel");
    break;
    }
    return 0;
}