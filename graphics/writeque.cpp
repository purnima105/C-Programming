#include <graphics.h>
#include <conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(YELLOW);
    circle(100,100,56);
    //setfillstyle(SOLID_FILL,YELLOW);
    floodfill(101,101,YELLOW);
    setcolor(GREEN);
    //settextstyle(GOTHIC_FONT,HORIZ_DIR,1);
    outtextxy(100,100,"jayabehen");
    getch();
    closegraph();

}
