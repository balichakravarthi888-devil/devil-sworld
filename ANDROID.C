#include <graphics.h>
#include <conio.h>

/* Draw Android logo centered at (cx, cy) with scale s */
void drawAndroid(int cx, int cy, int s)
{
    /* Body */
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    bar(cx - 4*s, cy - 2*s, cx + 4*s, cy + 5*s);

    /* Head (semicircle) */
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    pieslice(cx, cy - 2*s, 0, 180, 4*s);

    /* Left antenna */
    line(cx - 2*s, cy - 2*s, cx - 4*s, cy - 4*s);
    line(cx - 2*s + 1, cy - 2*s, cx - 4*s + 1, cy - 4*s);
    /* Right antenna */
    line(cx + 2*s, cy - 2*s, cx + 4*s, cy - 4*s);
    line(cx + 2*s - 1, cy - 2*s, cx + 4*s - 1, cy - 4*s);

    /* Eyes */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(cx - 2*s, cy - 2*s, s/4, s/4);
    fillellipse(cx + 2*s, cy - 2*s, s/4, s/4);

    /* Arms */
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    bar(cx - 5*s, cy - 1*s, cx - 4*s, cy + 4*s); /* Left arm */
    bar(cx + 4*s, cy - 1*s, cx + 5*s, cy + 4*s); /* Right arm */

    /* Legs */
    bar(cx - 3*s, cy + 5*s, cx - 2*s, cy + 8*s); /* Left leg */
    bar(cx + 2*s, cy + 5*s, cx + 3*s, cy + 8*s); /* Right leg */
}

int main()
{
    int gd = DETECT, gm;
    int maxx, maxy, cx, cy;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi"); /* Change path if needed */

    maxx = getmaxx();
    maxy = getmaxy();
    cx = maxx / 2;
    cy = maxy / 2;

    setbkcolor(WHITE);
    cleardevice();

    drawAndroid(cx, cy, 10);

    setcolor(BLACK);
    outtextxy(10, 10, "Android Logo - Turbo C++ graphics");

    getch();
    closegraph();
    return 0;
}
