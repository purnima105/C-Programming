#include <stdio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the vertices of the triangle
    int vertices[] = {10,75,50,25,100,25,140,75,100,125,50,125,50,125,10,75};

    // Draw the triangle
    drawpoly(10, vertices);
    fillpoly(10,vertices);


    // Wait for user to close the graphics window
    getch();
    closegraph();
    return 0;
}