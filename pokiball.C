#include <graphics.h>
#include <conio.h>
#include <dos.h>

void main() {
    int gd = DETECT, gm;
    int x=320,y=240;
    int radius=100;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Coordinates for center of Pokéball
   // int x = 320, y = 240;
    //nt radius = 100;

    // Draw top half (red)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    pieslice(x, y, 0, 180, radius);

    // Draw bottom half (white)
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    pieslice(x, y, 180, 360, radius);

    // Draw center black horizontal line
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 1, 3);
    line(x - radius, y, x + radius, y);

    // Draw outer circle (border)
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 1, 1);
    circle(x, y, radius);

    // Draw center small black circle
    setfillstyle(SOLID_FILL, BLACK);
    circle(x, y, 20);
    floodfill(x, y, BLACK);

    // Draw center smaller white circle inside black
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    circle(x, y, 10);
    floodfill(x, y, WHITE);

    getch();
    closegraph();
}
