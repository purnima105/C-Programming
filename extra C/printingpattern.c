//priting pattern
//54321
//5432
//543
//54
//5

#include <stdio.h>

int main()
{
    int row,column;

    for(row=5;row>=1;row--)
    {
        for(column=row;column>=1;column--)
        {
            printf("%d",column);
        }
        printf("\n");
    }
    return 0;
}
