/*Write a program to take 28 records of cattle (cid,name,age, weight) 
from the user and display the average weight of the cattle.*/
#include <stdio.h>
struct cattle 
{
    int cid;
    char name[20];
    int age;
    float weight;
};
int main()
{
    struct cattle c[2];
    int i;
    for(i=0;i<2;i++)
    {
    printf("the details of cattle : ");
    printf("enter the cid:");
    scanf("%d",&c[i].cid);
    printf("enter the name: ");
    scanf("%s",c[i].name);
    printf("enter the age: ");
    scanf("%d",&c[i].age);
    printf("enter the weight: ");
    scanf("%f",&c[i].weight);
    }
    float sum=0;
    float average;
    for(i=0;i<2;i++)
    {
        sum=sum+c[i].weight;
        average=sum/2*100;
       
    }
    printf("the average weight is %f",average);
    return 0;


}