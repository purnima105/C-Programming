//wap to input the monthly sales amount of a sales person and find the commision amount as follow: 
//     sales amount             commision 
//       up to 1000               5%
//        >=1000 to 10000          10%
//         >=10000                  15%

#include <stdio.h>
int main()
{
    int sales,s,com;
    printf("enter the sales of the salesperson: ");
    scanf("%d",&s);
    if (sales<1000)
    {
        com=s*5/100;
    }
    else if (sales>=1000&&sales<10000)
    {
        com=s*10/100;
    }
    else
    {
        com=s*15/100;
    }
    printf("the commision of sales man is %d",com);
    return 0;
}

  