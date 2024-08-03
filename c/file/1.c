//wap to  input n interger &write into file integer.txt
//read the number from file &print only the even number
#include <stdio.h>
int main()
{
    FILE *fp;
    int n,i,num,num1;
    
    printf("enter the number : ");
    scanf("%d",&n);
    fp=fopen("integer.txt","w+");
    if (fp==NULL)
    {
        printf("file is not opening");
        return 1;
    }
    for(i=1;i<=n;i++)
    {
        printf("enter the integer %d :",i);
        scanf("%d",&num);
        fprintf(fp,"%d,",num);

    }
    rewind(fp);
    for(i=1;i<=n;i++)
    {
        fscanf(fp,"%d,",&num1);
        if (num1%2==0)
        {
            printf("\n%d ",num1);
        }
    }
    fclose(fp);
    return 0;   
}