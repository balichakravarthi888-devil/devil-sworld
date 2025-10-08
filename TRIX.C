#include <graphics.h>
#include <conio.h>

void drawOmnitrix(int cx, int cy, int s)
{
     int tri1[8];
     int tri2[8];
    /* Outer watch border */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(cx, cy, 6*s, 6*s);

    /* Watch face outer rim */
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(cx, cy, 5*s, 5*s);

    /* Inner green circle */
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    fillellipse(cx, cy, 4*s, 4*s);

    /* Black hourglass symbol */
    setcolor(BLACK);
    setfillstyle(SOLID_FILL, BLACK);
    /* Upper triangle */
  //  int tri1[8];
    tri1[0] = cx - 3*s; tri1[1] = cy - 4*s;
    tri1[2] = cx + 3*s; tri1[3] = cy - 4*s;
    tri1[4] = cx + 1*s; tri1[5] = cy - 1*s;
    tri1[6] = cx - 1*s; tri1[7] = cy - 1*s;
    fillpoly(4, tri1);
    /* Lower triangle */
  //  int tri2[8];
    tri2[0] = cx - 3*s; tri2[1] = cy + 4*s;
    tri2[2] = cx + 3*s; tri2[3] = cy + 4*s;
    tri2[4] = cx + 1*s; tri2[5] = cy + 1*s;
    tri2[6] = cx - 1*s; tri2[7] = cy + 1*s;
    fillpoly(4, tri2);

    /* White highlights inside green circle */
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(cx - 2*s, cy - 2*s, s/2, s/2);
    fillellipse(cx + 2*s, cy + 2*s, s/2, s/2);

    /* Side straps (left & right) */
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(cx - 8*s, cy - 2*s, cx - 6*s, cy + 2*s);
    bar(cx + 6*s, cy - 2*s, cx + 8*s, cy + 2*s);

    /* Outer strap details */
    setcolor(BLACK);
    rectangle(cx - 8*s, cy - 2*s, cx - 6*s, cy + 2*s);
    rectangle(cx + 6*s, cy - 2*s, cx + 8*s, cy + 2*s);
}

int main()
{


    int gd = DETECT, gm;
    int maxx, maxy, cx, cy;

    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    maxx = getmaxx();
    maxy = getmaxy();
    cx = maxx / 2;
    cy = maxy / 2;

    setbkcolor(BLACK);
    cleardevice();

    drawOmnitrix(cx, cy, 10);

    setcolor(BLACK);
    outtextxy(10, 10, "Ben 10 Omnitrix - Turbo C++ graphics");

    getch();
    closegraph();
    return 0;
}
