#include<graphics.h>
#include<conio.h>
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   int x,y;
   x=getmaxx();
   y=getmaxy();
   x=x/2;
   y=y/2;
   
   setbkcolor(WHITE);
   setcolor(RED);
   circle(x,y,50);
   setcolor(RED);
   outtextxy(x,y,"iloveyou");
   getch();
   closegraph();
   return 0;
}