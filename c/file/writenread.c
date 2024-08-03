// to write and read one integer in file
#include <stdio.h>
int main()
{
    int m,n;
    FILE *fp;
    printf("enter 1st the number:  ");
    scanf("%d",&m);
    printf("enter 2st the number:  ");
    scanf("%d",&n);
    fp=fopen("readnwrite.txt","w+");
    if(fp==NULL)
    {
        printf("File opening not successful !!! ");
        return 1;
    }
    fprintf(fp,"%d,%d",m,n);
    fseek(fp,0,SEEK_SET);
    fscanf(fp,"%d,%d",&m,&n);
    printf("the two numbers are %d and %d",m,n);
    fclose(fp);
    return 0;
    }