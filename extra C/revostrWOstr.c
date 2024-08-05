//reverse a string witout usiing string 
#include <stdio.h>
#include <string.h> 
int main()
{
    int i,j,length=0 ;
    int flag;
    char str[15]="tenet";
    
    for (i=0;str[i]!=0;i++)
    {
        length++;
    }
    
    i=0;          //navigate from lefft to right from first char
    j=length-1;    //navigate from lefft to right from last char
   /* //for(i=0,j=length-1;i<=length;i++)
    while(i<=j)
    {
        if (str[i]!=str[j])
        {
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0) 
    {
        printf("%s is a palindrome ");
    }
    else
    {
        printf("%s is a palindrome ");
    }
    getch();
    return 0;

}*/
// Reverse the string by swapping characters
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}