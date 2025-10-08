/* Clean Turbo C / Turbo C++ (BGI) code - Stormbreaker (fixed loop syntax) */
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>

void drawStormbreaker(void)
{
    int y;

    /* background */
    setbkcolor(LIGHTBLUE);
    cleardevice();

    /* Left blade (filled rectangle) */
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(200, 140, 270, 200);

    /* Right blade (filled rectangle) */
    setcolor(LIGHTGRAY);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    bar(270, 140, 340, 200);



    /* Simple shading lines on the right blade */
    setcolor(DARKGRAY);
    line(270, 140, 340, 200);
    line(340, 140, 270, 200);

    /* Central connector between blades */
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    bar(245, 200, 295, 220);

    /* Handle (long filled rectangle) */
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    bar(265, 220, 275, 380);

    /* Leather wrap lines on the handle (slanted short lines) */
    setcolor(DARKGRAY);
    y = 220;
    while (y <= 360)
    {
	line(265, y, 275, y + 10);
	y = y + 15;
    }

    /* Bottom cap of the handle (circle + fill) */
    setcolor(DARKGRAY);
    circle(270, 395, 10);               /* draw border */
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(270, 395, DARKGRAY);     /* fill inside the border */

    /* Label */
    setcolor(BLACK);
    outtextxy(140, 420, "Thor's Stormbreaker");
}

int main(void)
{
    int gd = DETECT, gm;

    /* initialize graphics (change path if your BGI is elsewhere) */
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");

    /* Draw */
    drawStormbreaker();

    getch();
    closegraph();
    return 0;
}
