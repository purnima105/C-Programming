//to write a integer value into file
#include <stdio.h>
int main()
{
    int a,b;
    FILE *fp;
    printf("enter the number :  ");
    scanf("%d",&a);
    printf("enter the number :  ");
    scanf("%d",&b);
    fp=fopen("writetwoint.txt","w");
    if(fp==NULL)
    {
        printf("File opening not succesful");
        return 1;
    }
    fprintf(fp,"%d,%d",a,b);
    printf("the number is %d,%d",a,b);
    fclose(fp);
    return 0;

}