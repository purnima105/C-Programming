#include <conio.h>
#include <graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    setcolor(13);
    circle(100,100,100);
    rectangle(200,250,400,350);
    arc(300,3000,0,60,40);
    setcolor(6);
    ellipse(150,150,0,360,100,40);
    getch();
    closegraph();
    return 0;
}