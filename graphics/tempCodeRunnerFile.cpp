//traingle
#include<graphics.h>
#include <conio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    int gd=DETECT,gm;
    initgraph(&gm,&gd,(char*)"");
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    getch();
    closegraph();
    return 0;
}