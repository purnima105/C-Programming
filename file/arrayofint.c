//wap to write an array of integers to a file integer.txt
#include <stdio.h>
int main()
{
    int a[5];
    int i;
    FILE *fp;
    printf("enter the elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }  
    fp=fopen("interger.txt","w+");
    if (fp==NULL)
    {
        printf("file opening not succesful");
        return 1;
    }
    for(i=0;i<5;i++)
    {
    fprintf(fp,"%d\t",a[i]);
    
   // rewind(fp);
   /* for(i=0;i<5;i++)
    {*/
    fscanf(fp,"%d\t",&a[i]);
    printf("the elements of array are %d\n",a[i]);
    }
fclose(fp);
return 0;
}