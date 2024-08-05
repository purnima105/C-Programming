//program to draw a line passsing from a point (0,50)to another point (200,300)
#include <graphics.h>
int main()
{
    int gd=DETECT,gm;
    int x1,x2,x3,y1,y2,y3;
    x1=100,y1=100,x2=200,y2=200,x3=300,y3=100;
    initgraph(&gm,&gd,"C:\\TC\\BGI");
    circle(100,100,50);
    setcolor(GREEN);
    line(0,50,200,300);
    outtextxy(100,150,"aaluuu");
    //cleardevice();
    ellipse(300,300,0,360,56,70);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    cleardevice();
    arc(100,150,90,180,75);
    outtextxy(100,100,"AALU HO TUM");
    getch();
    closegraph();
}
