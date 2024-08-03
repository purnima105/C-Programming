 //wap  to compute the sum of first 10 even number using function
 #include <stdio.h>
 int sumev(int x);
 int main()
 {
    int n,a[3],i,x,sum;
    printf("enter the first 10 even numbers: ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    sumev(x);
    printf("the sum of even numbers is %d",sum);
    return 0;
 }
 int sumev(int x)
 {
    int sum=0,i;
    for(i=0;i<3;i++)
    sum=sum+i;
 }
 