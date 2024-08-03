//wap to find position of 12 in array os size 20
#include <stdio.h>
int main()
{
    int a[20];
    int position= -1;
    printf("enter the elements of array: ");
    for (int i=0;i<20;i++)
    {
        scanf("%d",&a[i]);                                           //20 ota array elem enter garim
    }
    for (int i=0;i<20;i++)
    {
        if(a[i]==12)                                         /* enter gareko elem ma 12 xa ki xaina */
        {
            position=i+1;
            break;                         //if xa vane pos=i+1 garne cause hami lai position find garnu xa //
        }    
     }                                         //suppose a[9]ma 12 xa vane position 10 hunxa//
        if (position==-1)                               //as array 0 bata suru hunxa and position 1 bata//
        {
            printf("the value is not present");
        }                                    
        else 
        {
            printf("the value is present at position %d",position);
        }        
    
    return 0;


}