//find the no of comma and whitespace in a string 
#include <stdio.h>
int main()
{
    char str[30]="hello, how are you doing?";
    int wscount=0, cmcount=0,i;
    for (i=0;str[i]!='\0';i++)
    {
        if(str[i]==',')
        {
            cmcount++;
        }
        else if (str[i]==' ')
        {
            wscount++;
        }

    }


    printf("the no of comma are: %d\n",cmcount);
    printf("the no of whitespace are: %d",wscount);
    return 0;
}