#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    int age;
};
struct person p1; 
int main()
{
    strcpy(p1.name,"tom");
    p1.age=17;
    
    printf("The name and age are:%s,%d",p1.name,p1.age);
    return 0;
}