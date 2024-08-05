#include<graphics.h>
#include <conio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    x1=100;
    y1=100;
    x2=200;
    y2=200;
    x3=300;
    y3=100;
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    getch();
    closegraph();
    return 0;
}