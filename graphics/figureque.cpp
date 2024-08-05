#include <graphics.h>
#include <conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gm,&gd,(char*)"");
    rectangle(50,50,150,150);
    line(100,50,150,50);
    line(50,100,50,100);
    line(50,150,150,50);
    circle(100,100,20);
    circle(100,100,30);
    circle(100,100,40);
    outtextxy(55,55,"Hello World");
    getch();
    closegraph();
}     